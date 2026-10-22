/*
 * FUN_005e1430 (116 B) — Searches a list for an object matching param_1.
 * Returns 1 (AL) if found, else 0.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041fd80(void);
extern char __cdecl FUN_00415230(int param);
extern int __cdecl FUN_005df620(void);

__declspec(naked) int __cdecl FUN_005e1430(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007f2524;
__asm {
mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        mov edx, dword ptr [DAT_007dab40]
        push    ebx
        xor     ecx, edx
        mov     eax, dword ptr [ecx + 0x10]
        xor     eax, 0x85739531
        push    ebp
        push    esi
        push    edi
        jz      label_1496
        mov     ebp, dword ptr [eax + 0x8c]
        xor     ebx, ebx
        test    ebp, ebp
        jle     label_1496
        mov     edi, dword ptr [eax + 0x88]
        add     edi, 0x14
    label_1462:
        mov     ecx, dword ptr [edi]
        call    FUN_0041fd80
        mov     esi, eax
        test    esi, esi
        jz      label_148e
        mov eax, dword ptr [DAT_007f2524]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        cmp     al, 0x1
        jnz     label_148e
        mov     ecx, esi
        call    FUN_005df620
        cmp     eax, dword ptr [esp + 0x14]
        jz      label_149d
    label_148e:
        inc     ebx
        add     edi, 0x1c
        cmp     ebx, ebp
        jl      label_1462
    label_1496:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        ret
    label_149d:
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        ret
    }


}
