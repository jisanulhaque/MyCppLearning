.PHONY: clean All

All:
	@echo "----------Building project:[ ConstructorAndDestructor - Debug ]----------"
	@cd "ConstructorAndDestructor" && "$(MAKE)" -f  "ConstructorAndDestructor.mk"
clean:
	@echo "----------Cleaning project:[ ConstructorAndDestructor - Debug ]----------"
	@cd "ConstructorAndDestructor" && "$(MAKE)" -f  "ConstructorAndDestructor.mk" clean
