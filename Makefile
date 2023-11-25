.PHONY: clean All

All:
	@echo "----------Building project:[ ConstructosAndDestructors - Debug ]----------"
	@cd "ConstructosAndDestructors" && "$(MAKE)" -f  "ConstructosAndDestructors.mk"
clean:
	@echo "----------Cleaning project:[ ConstructosAndDestructors - Debug ]----------"
	@cd "ConstructosAndDestructors" && "$(MAKE)" -f  "ConstructosAndDestructors.mk" clean
