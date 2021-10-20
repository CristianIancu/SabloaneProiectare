import java.util.ArrayList;

class Author{
    private String name;
    Author(String n){
        name=n;
    }
    public void print(){
      System.out.println(name);
  }
};
class Chapter{
    private String name;
     
  ArrayList<SubChapter> subChapters;
    Chapter(String n){
        name=n;
        subChapters=new ArrayList<SubChapter>();
    }
    public void print(){
      System.out.println(name);
  }
  public int createSubChapter(String c){
      subChapters.add(new SubChapter(c));
      return subChapters.size()-1;
  }
  public SubChapter getSubChapter(int index){
      return subChapters.get(index);
  }
};
class Pharagraf{
    private String text;
    Pharagraf(String s){
        text=s;
    }
    public void print(){
      System.out.println(text);
    }
};
class Image{
    private String imageName;
    Image(String s){
        imageName=s;
    }
    public void print(){
      System.out.println(imageName);
    }
};
class Table{
    private String title;
    Table(String s){
        title=s;
    }
    public void print(){
      System.out.println(title);
    }
};
class SubChapter{
    private String name;
    ArrayList<Pharagraf> pharagrafs;
    ArrayList<Image> images;
    ArrayList<Table> tables;
    
    SubChapter(String n){
        name=n;
        pharagrafs=new ArrayList<Pharagraf>();
        images=new ArrayList<Image>();
        tables=new ArrayList<Table>();
    }
    
    public void createNewParagraph(String s){
        pharagrafs.add(new Pharagraf(s));
    }
    public void createNewImage(String s){
        images.add(new Image(s));
    }
    public void createNewTable(String s){
        tables.add(new Table(s));
    }
    public void print(){
      System.out.println("Subchapter: " + name);
      
      for(int i=0;i<pharagrafs.size();i++){
        System.out.print("Pharagraf: ");
        pharagrafs.get(i).print();
      }
      for(int i=0;i<images.size();i++){
        System.out.print("Image with name: ");
        images.get(i).print();
      }
      for(int i=0;i<tables.size();i++){
        System.out.print("Table with title: ");
        tables.get(i).print();
        }
    }
};

class Book{
  private String title;
  ArrayList<Author> authors;
  ArrayList<Chapter> chapters;
  
  Book(String a){
      title=a;
      authors=new ArrayList<Author>();
      chapters=new ArrayList<Chapter>();
  }
 
  public void print(){
      System.out.println(title);
  }
  public void addAuthor(Author a){
      authors.add(a);
  }
  public int createChapter(String c){
      chapters.add(new Chapter(c));
      return chapters.size()-1;
  }
  public Chapter getChapter(int index){
      return chapters.get(index);
  }
  
  
};

public class Main
{
	public static void main(String[] args) {
        Book discoTitanic = new Book("Disco Titanic");
        Author rpGheo = new Author("Radu Pavel Gheo");
        
        discoTitanic.addAuthor(rpGheo);
        int indexChapterOne = discoTitanic.createChapter("Capitolul 1");
        Chapter chp1 = discoTitanic.getChapter(indexChapterOne);
        int indexSubChapterOneOne = chp1.createSubChapter("Subcapitolul 1.1");
        SubChapter scOneOne = chp1.getSubChapter(indexSubChapterOneOne);
        
        scOneOne.createNewParagraph("Paragraph 1");
        scOneOne.createNewParagraph("Paragraph 2");
        scOneOne.createNewParagraph("Paragraph 3");
        scOneOne.createNewImage("Image 1");
        scOneOne.createNewParagraph("Paragraph 4");
        scOneOne.createNewTable("Table 1");
        scOneOne.createNewParagraph("Paragraph 5");
        scOneOne.print();
        
    }
}