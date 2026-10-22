/*
 * FUN_00574e20 (188 B) — Object query handler.
 *
 * Queries objects by type, iterates results, calls a method on each.
 *
 * __cdecl (params on stack), returns void.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_00415230(int param);
extern void __cdecl FUN_00566ef0(int param1, void *param2, int param3);
extern void __cdecl FUN_005f2690(int param);
extern void __cdecl FUN_004084e0(void *param);

__declspec(naked) void __cdecl FUN_00574e20(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007f25b8;
__asm {
        mov eax, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [eax]
        sub     esp, 0xc
        push    esi
        xor eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0x18]
        xor     ecx, 0x85739531
        jz      l_skip
        mov ecx, dword ptr [DAT_007f25b8]
        mov     edx, dword ptr [eax + 0x18]
        xor     edx, 0x85739531
        push    ecx
        mov     ecx, dword ptr [edx + 4]
        call    FUN_00415230
        cmp     al, 1
        jnz     l_skip
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        mov edx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [esp + 0x14]
        push    edi
        xor     ecx, edx
        mov     edi, dword ptr [ecx + 0x18]
        push    0
        lea     edx, [esp + 0xc]
        push    edx
        push    eax
        xor     edi, 0x85739531
        mov     dword ptr [esp + 0x14], 0
        mov     dword ptr [esp + 0x18], 0
        mov     dword ptr [esp + 0x1c], 0
        call    FUN_00566ef0
        mov     esi, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x18]
        add     esp, 0xc
        cmp     esi, eax
        jz      l_free_check
l_loop:
        mov     ecx, dword ptr [esi]
        mov     edx, dword ptr [ecx + 0x30]
        push    edx
        mov     ecx, edi
        call    FUN_005f2690
        mov     eax, dword ptr [esp + 0xc]
        add     esi, 4
        cmp     esi, eax
        jnz     l_loop
        mov     esi, dword ptr [esp + 0x8]
l_free_check:
        test    esi, esi
        pop     edi
        jz      l_skip
        push    esi
        call    FUN_004084e0
        add     esp, 4
l_skip:
        pop     esi
        add     esp, 0xc
        ret
    }


}
