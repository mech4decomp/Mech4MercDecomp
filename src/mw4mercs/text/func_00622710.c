/* func_00622710 - ABL interpreter region
 * __thiscall void (this) RET (no args)
 * Builds a byte-flag table from global object lookups, then iterates a
 * vector dispatching entries to helper functions.
 */
extern int g_007dab44;
extern int g_007dab40;
extern int g_007f25c0;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00621c10(void);
extern void __cdecl FUN_00621d50(void);

__declspec(naked) void func_00622710(void) {
    __asm {
        sub esp, 0xc
        mov eax, dword ptr [g_007dab44]
        mov edx, dword ptr [g_007dab40]
        push ebx
        mov dword ptr [esp+0x4], ecx
        mov ecx, dword ptr [eax]
        push ebp
        xor ecx, edx
        mov ebp, dword ptr [ecx+0xc]
        xor ebp, 0x85739531
        xor edx, edx
        push esi
        mov dword ptr [esp+0x10], edx
        push edi
        mov dword ptr [esp+0x18], edx
        lea edi, [ebp+0x3584]
        mov ebx, 0xff
    L_622748:
        mov eax, dword ptr [edi]
        test eax, eax
        jz L_622779
        mov esi, dword ptr [eax+0x170]
        test esi, esi
        jz L_622779
        mov eax, dword ptr [g_007f25c0]
        mov ecx, dword ptr [esi+4]
        push eax
        call FUN_00415230
        cmp al, 0x1
        jnz L_622779
        mov esi, dword ptr [esi+0x4cc]
        cmp esi, 0x8
        jz L_622779
        mov byte ptr [esp+esi*1+0x14], al
    L_622779:
        add edi, 0x2038
        dec ebx
        jnz L_622748
        lea ecx, [ebp+0x205f35]
        mov edx, 0x18
    L_62278d:
        mov al, byte ptr [ecx-1]
        test al, al
        jz L_6227b3
        cmp byte ptr [ecx], 0
        jz L_6227b3
        mov eax, dword ptr [ecx+0xfffffdfb]
        test eax, eax
        jz L_6227b3
        mov eax, dword ptr [eax+0x4cc]
        cmp eax, 0x8
        jz L_6227b3
        mov byte ptr [esp+eax*1+0x14], 1
    L_6227b3:
        add ecx, 0x22ac
        dec edx
        jnz L_62278d
        mov edi, dword ptr [esp+0x10]
        mov ebx, dword ptr [edi]
        cmp ebx, dword ptr [edi+4]
        jz L_622835
    L_6227c7:
        mov edx, dword ptr [ebx]
        test edx, edx
        jz L_62282b
        mov ecx, dword ptr [edx+8]
        test ecx, ecx
        jge L_62282b
        or eax, 0xffffffff
        sub eax, ecx
        js L_62282b
        cmp eax, 0x8
        jge L_62282b
        cmp byte ptr [esp+eax*1+0x14], 1
        jnz L_622820
        mov eax, dword ptr [edi+0x2b8]
        mov ecx, dword ptr [edi+0x2bc]
        cmp eax, ecx
        jz L_62282b
        mov esi, dword ptr [edx+4]
    L_6227fa:
        cmp dword ptr [eax], esi
        jz L_622807
        add eax, 0x10
        cmp eax, ecx
        jnz L_6227fa
        jmp L_62282b
    L_622807:
        cmp byte ptr [eax+0xc], 1
        jnz L_62281a
        mov eax, dword ptr [edx+0x14]
        push eax
        mov ecx, edi
        call FUN_00621c10
        jmp L_62282b
    L_62281a:
        mov ecx, dword ptr [edx+0x14]
        push ecx
        jmp L_622824
    L_622820:
        mov edx, dword ptr [edx+0x14]
        push edx
    L_622824:
        mov ecx, edi
        call FUN_00621d50
    L_62282b:
        mov eax, dword ptr [edi+4]
        add ebx, 4
        cmp ebx, eax
        jnz L_6227c7
    L_622835:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xc
        ret
    }
}
