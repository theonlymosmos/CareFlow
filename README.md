Year 2 - Sem 1

### **Project Name: "Care Flow"**  
*(A professional name reflecting medical scheduling and management capabilities)*  

---

### **Project Overview**  
A comprehensive **C++ Hospital Management System** that handles:  
- **Doctor Classification**: Surgeons vs. Specialists with distinct billing models  
- **Surgery Scheduling**: Dynamic allocation and tracking of surgical procedures  
- **Data Persistence**: File I/O for doctor/surgery records  
- **Polymorphic Design**: Object-oriented architecture for extensibility  

---

### **Key Features**  
#### **1. Doctor Management System**  
- **Surgeons**:  
  - Hourly billing (`duration/60 * rate`)  
  - Dynamic surgery scheduling with patient names/dates  
- **Specialists**:  
  - Per-quarter-hour billing (`duration/15 * rate`)  
  - Specialization tracking (e.g., cardiology, neurology)  

#### **2. Dynamic Memory Handling**  
- Polymorphic `Doctor*` array storing heterogeneous objects  
- Deep copy constructors and destructors for surgery schedules  
- Proper heap deallocation with `delete[]`  

#### **3. File I/O Operations**  
- Persistent storage in `doctors.txt`  
- Formatted output matching console display  

#### **4. User Interface**  
- Interactive console prompts for data entry  
- Validation for doctor type selection  
- Clear PrettyPrint formatting for doctor details  

---

### **Skills Demonstrated**  
#### **Advanced OOP**  
✅ **Polymorphism**: Virtual functions (`calculateTotalFee()`, `PrettyPrint()`)  
✅ **Inheritance**: `Doctor` ← `Surgeon`/`Specialist` hierarchy  
✅ **Encapsulation**: Private members with public interfaces  
✅ **RAII**: Destructors managing dynamic memory  

#### **Memory Management**  
🔍 **Deep Copying**: Custom copy constructor for `Surgeon`  
⚡ **Heap Allocation**: `new`/`delete` for objects and arrays  
📦 **Pointer Handling**: `Doctor**` array with dynamic casting  

#### **File & I/O Operations**  
- `fstream` for persistent data storage  
- Formatted text output with `PrettyPrint()`  

#### **Algorithmic Design**  
- Dynamic surgery scheduling arrays  
- Type-specific billing calculations  
- Input validation loops  

---

### **Technical Highlights**  
```cpp
// Polymorphic Doctor array
Doctor** arr = new Doctor*[numm]; 

// Runtime type-specific initialization
arr[i] = new Surgeon(id, name, duration, rate, numSurgeries); 

// Deep copy in Surgeon class
Surgeon::Surgeon(const Surgeon& obj1) : Doctor(obj1) {
  SurgerySchedules = new surgerySchedule[numSurgeriesScheduled];
  // ... deep copy elements ...
}
```

```cpp
// Polymorphic file output
outfile << arr[j]->PrettyPrint(); 
if (auto surgeon = dynamic_cast<Surgeon*>(arr[j])) 
  outfile << surgeon->printSurgeries();
```

---

### **Suggested Improvements**  
1. **Exception Handling**  
   - Add `try/catch` for memory allocation failures  
2. **Data Validation**  
   - Validate positive values for duration/rates  
3. **STL Containers**  
   - Replace arrays with `vector<unique_ptr<Doctor>>`  
4. **Additional Features**  
   - Patient class with medical histories  
   - Conflict checking for surgery schedules  

---

### **Why "Care Flow"?**  
- **Industry-Relevant**: Solves real hospital management needs  
- **Professional**: Demonstrates complex system design skills  
- **Portfolio-Ready**: Showcases OOP mastery in C++  

This project highlights  ability to architect **complex object-oriented systems** with real-world applicability in healthcare IT. ⚕️💻  

---

**Technical Depth Additions**:  
1. **Polymorphic File Serialization**  
   - Each doctor type handles its own file output format  
2. **Deep Copy Semantics**  
   - Critical for surgery schedule integrity during copies  
3. **Dynamic Casting**  
   - Safely access surgeon-specific features via `dynamic_cast`  
4. **Memory Safety**  
   - Virtual destructors ensure proper cleanup in inheritance hierarchy  

Contributers: Mousa M Mousa , Omar Rafaat Turkey
