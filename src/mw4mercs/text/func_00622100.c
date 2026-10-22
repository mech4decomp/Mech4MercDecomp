/* func_00622100 - ABL interpreter region
 * __thiscall void (this, arg) RET 0x4
 * Iterates a vector at [this+0x198..0x19c], updating counters on entries
 * via a global object lookup.
 */
extern int g_007dab44;
extern int g_007dab40;
extern void __cdecl FUN_004cdfa0(void);
extern void __cdecl FUN_004ceeb0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_00624420(void);

__declspec(naked) void func_00622100(void) {
    __asm {
        push ebx
        mov ebx, dword ptr [ecx+0x198]
        push ebp
        mov ebp, dword ptr [ecx+0x19c]
        cmp ebx, ebp
        push esi
        push edi
        jz L_6221c4
    L_622118:
        mov edi, dword ptr [ebx]
        mov eax, dword ptr [edi+8]
        test eax, eax
        jnz L_622163
        mov eax, dword ptr [g_007dab44]
        mov esi, dword ptr [g_007dab40]
        mov eax, dword ptr [eax]
        xor ecx, ecx
        mov cl, byte ptr [edi+0x18]
        xor eax, esi
        lea esi, [edi+0x18]
        push ecx
        mov ecx, dword ptr [eax+0x14]
        xor ecx, 0x85739531
        call FUN_004cdfa0
        test eax, eax
        jz L_6221b9
        push esi
        mov ecx, eax
        call FUN_004ceeb0
        test eax, eax
        jz L_6221c4
        mov cl, byte ptr [eax+0x2f8]
        test cl, cl
        jz L_6221b9
        jmp L_6221ac
    L_622163:
        jge L_6221b9
        mov edx, dword ptr [g_007dab44]
        mov ecx, dword ptr [edx]
        xor ecx, dword ptr [g_007dab40]
        mov edx, dword ptr [ecx+0xc]
        mov ecx, 0x8133f
        xor edx, 0x85739531
        sub ecx, eax
        mov ecx, dword ptr [edx+ecx*4]
        call FUN_0041fd80
        test eax, eax
        jz L_6221b9
        mov eax, dword ptr [eax+0x520]
        test eax, eax
        jz L_6221b9
    L_622195:
        mov ecx, dword ptr [eax]
        test ecx, ecx
        mov eax, dword ptr [eax+4]
        jz L_6221b9
        mov dl, byte ptr [ecx+0x2f8]
        test dl, dl
        __emit 0x74  /* __emit: backward jz to L_622195; MSVC6 miscomputes rel offset by -4 (call-reloc between branch and target) */
        __emit 0xE9
    L_6221ac:
        mov ecx, edi
        call FUN_00624420
        add eax, dword ptr [esp+0x14]
        mov dword ptr [edi], eax
    L_6221b9:
        add ebx, 4
        cmp ebx, ebp
        jnz L_622118
    L_6221c4:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
    }
}
