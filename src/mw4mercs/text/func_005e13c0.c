/*
 * FUN_005e13c0 (109 B) — Iterates a list of objects, calls FUN_005df4f0(0).
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041fd80(void);
extern char __cdecl FUN_00415230(int param);
extern int __cdecl FUN_005df620(void);
extern void __cdecl FUN_005df4f0(int param);

__declspec(naked) void __cdecl FUN_005e13c0(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007f2524;
__asm {
mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [ecx + 0x10]
        xor     ecx, 0x85739531
        jz      label_142c
        mov     eax, dword ptr [ecx + 0x8c]
        test    eax, eax
        jle     label_142c
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [ecx + 0x88]
        add     edi, 0x14
        mov     ebx, eax
    label_13f0:
        mov     ecx, dword ptr [edi]
        call    FUN_0041fd80
        mov     esi, eax
        test    esi, esi
        jz      label_1423
        mov eax, dword ptr [DAT_007f2524]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        cmp     al, 0x1
        jnz     label_1423
        mov     ecx, esi
        call    FUN_005df620
        test    eax, eax
        jz      label_1423
        push    0x0
        mov     ecx, esi
        call    FUN_005df4f0
    label_1423:
        add     edi, 0x1c
        dec     ebx
        jnz     label_13f0
        pop     edi
        pop     esi
        pop     ebx
    label_142c:
        ret
    }


}
