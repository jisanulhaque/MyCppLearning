.PHONY: clean All

All:
	@echo "----------Building project:[ Mystring-section-challenge2 - Debug ]----------"
	@cd "Mystring-section-challenge2" && "$(MAKE)" -f  "Mystring-section-challenge2.mk"
clean:
	@echo "----------Cleaning project:[ Mystring-section-challenge2 - Debug ]----------"
	@cd "Mystring-section-challenge2" && "$(MAKE)" -f  "Mystring-section-challenge2.mk" clean
