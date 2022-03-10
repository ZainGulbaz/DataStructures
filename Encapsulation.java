class Employee {
  private int empId;

  public void setId(int id) {
    empId = id;
  }

  public void getId() {
    System.out.println("Employee ID:" + empId);
  }
}

public class Encapsulation {

  public static void main(String args[]) {
    Employee zain = new Employee();
    zain.setId(24);
    zain.getId();
  }
}
