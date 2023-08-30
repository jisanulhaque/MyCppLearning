.PHONY: clean All

All:
	@echo "----------Building project:[ Mystring-operator-function - Debug ]----------"
	@cd "Mystring-operator-function" && "$(MAKE)" -f  "Mystring-operator-function.mk"
clean:
	@echo "----------Cleaning project:[ Mystring-operator-function - Debug ]----------"
	@cd "Mystring-operator-function" && "$(MAKE)" -f  "Mystring-operator-function.mk" clean
