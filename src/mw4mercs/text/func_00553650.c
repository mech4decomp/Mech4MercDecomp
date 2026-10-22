// 0x00553650 (32B) - Linked list iteration with destructor call
// Iterates through linked list nodes, calling FUN_004154D0 for each non-null data
extern void __cdecl FUN_004154d0(void *);

__declspec(naked) void __stdcall func_00553650(void) {
    __asm {
        push esi
        push edi
        mov edi, [esp + 0xC]
        mov esi, [edi]
loop_start:
        test esi, esi
        jz done
        mov ecx, [esi]
        test ecx, ecx
        mov esi, [esi + 4]
        jz done
        push edi
        call FUN_004154d0
        jmp loop_start
done:
        pop edi
        pop esi
        ret
    }
}
