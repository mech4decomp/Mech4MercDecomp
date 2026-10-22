/* func_00621910 - ABL interpreter region
 * __thiscall bool compare(byte* this, byte* other)
 * Compares first byte, then word at +2. Returns 1 if equal, 0 if not.
 */
__declspec(naked) void func_00621910(void) {
    __asm {
        mov al, byte ptr [ecx]
        push esi
        mov esi, dword ptr [esp+8]
        mov dl, byte ptr [esi]
        cmp al, dl
        jnz L1
        mov ax, word ptr [ecx+2]
        cmp ax, word ptr [esi+2]
    L1:
        sbb eax, eax
        neg eax
        pop esi
        ret 4
    }
}
