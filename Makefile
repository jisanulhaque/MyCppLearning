.PHONY: clean All

All:
	@echo "----------Building project:[ SectionChallenge - Debug ]----------"
	@cd "sectionChallenge" && "$(MAKE)" -f  "SectionChallenge.mk"
clean:
	@echo "----------Cleaning project:[ SectionChallenge - Debug ]----------"
	@cd "sectionChallenge" && "$(MAKE)" -f  "SectionChallenge.mk" clean
