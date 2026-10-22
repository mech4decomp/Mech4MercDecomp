/* func_00621fd0 - ABL interpreter region
 * __thiscall void (this, arg1, arg2, arg3) RET 0xC
 * Iterates a vector of entries, matching/updating counters via a global
 * object lookup, then sets a flag byte on `this`.
 */
extern int g_007dab44;
extern int g_007dab40;
extern int g_007f25c0;
extern void __cdecl FUN_004cdfa0(void);
extern void __cdecl FUN_004ceeb0(void);
extern void __cdecl FUN_00415230(void);

__declspec(naked) void func_00621fd0(void) {
    __asm {
        sub esp, 8
        mov eax, dword ptr [esp+0xc]
        lea edx, [eax+eax*2+6]
        mov edx, dword ptr [ecx+edx*4]
        lea eax, [eax+eax*2]
        mov eax, dword ptr [ecx+eax*4+0x1c]
        push ebx
        or ebx, 0xffffffff
        cmp edx, eax
        push edi
        mov dword ptr [esp+0xc], ecx
        mov dword ptr [esp+0x14], edx
        mov dword ptr [esp+0x8], eax
        jz L_6220d2
        push ebp
        push esi
    L_622000:
        mov esi, dword ptr [edx]
        test esi, esi
        jz L_6220b5
        mov ebp, dword ptr [esi+8]
        cmp ebp, 1
        jnz L_622021
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [esp+0x24]
        add eax, ecx
        mov dword ptr [esi], eax
        jmp L_6220b5
    L_622021:
        test ebp, ebp
        jnz L_622046
        mov edi, dword ptr [esp+0x20]
        mov dl, byte ptr [esi+0x18]
        cmp dl, byte ptr [edi]
        jnz L_62204a
        mov ax, word ptr [esi+0x1a]
        cmp ax, word ptr [edi+2]
        jnz L_62204a
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [esp+0x24]
        add eax, ecx
        mov dword ptr [esi], eax
        jmp L_6220b5
    L_622046:
        mov edi, dword ptr [esp+0x20]
    L_62204a:
        cmp ebx, -1
        jnz L_62209a
        mov edx, dword ptr [g_007dab44]
        mov ecx, dword ptr [g_007dab40]
        mov eax, dword ptr [edx]
        xor eax, ecx
        xor ecx, ecx
        mov cl, byte ptr [edi]
        xor ebx, ebx
        push ecx
        mov ecx, dword ptr [eax+0x14]
        xor ecx, 0x85739531
        call FUN_004cdfa0
        test eax, eax
        jz L_6220b5
        push edi
        mov ecx, eax
        call FUN_004ceeb0
        mov edi, eax
        test edi, edi
        jz L_6220b5
        mov eax, dword ptr [g_007f25c0]
        mov ecx, dword ptr [edi+4]
        push eax
        call FUN_00415230
        test al, al
        jz L_6220b5
        mov ebx, edi
    L_62209a:
        test ebx, ebx
        jz L_6220b5
        mov edx, dword ptr [ebx+0x4cc]
        inc edx
        neg ebp
        cmp ebp, edx
        jnz L_6220b5
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [esp+0x24]
        add ecx, eax
        mov dword ptr [esi], ecx
    L_6220b5:
        mov edx, dword ptr [esp+0x1c]
        mov eax, dword ptr [esp+0x10]
        add edx, 4
        cmp edx, eax
        mov dword ptr [esp+0x1c], edx
        jnz L_622000
        mov ecx, dword ptr [esp+0x14]
        pop esi
        pop ebp
    L_6220d2:
        mov edx, dword ptr [g_007dab44]
        mov eax, dword ptr [edx]
        xor eax, dword ptr [g_007dab40]
        mov edx, dword ptr [eax+0xc]
        xor edx, 0x85739531
        mov al, byte ptr [edx+0x16]
        test al, al
        pop edi
        pop ebx
        jz L_6220f9
        mov byte ptr [ecx+0x2ec], 1
    L_6220f9:
        add esp, 8
        ret 0xc
    }
}
