/*
 * FUN_005dd220 (84 B) — __fastcall (ECX = this).
 * If this+0x2F2 set and this+0x170 non-null, calls FUN_00415230(0x7f1f84);
 * if it returns 1 and this+0x1C4 clear and obj+0x408 non-null, sets
 * this+0x1C4=1 and calls virtual +0x10C(1).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char __cdecl FUN_00415230(int param);

__declspec(naked) void __stdcall FUN_005dd220(void)
{
    

extern int DAT_007f1f84;
__asm {
push    esi
        push    edi
        mov     edi, ecx
        mov     al, byte ptr [edi + 0x2f2]
        test    al, al
        jz      L_5dd271
        mov     esi, dword ptr [edi + 0x170]
        test    esi, esi
        jz      L_5dd271
        mov eax, dword ptr [DAT_007f1f84]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        cmp     al, 0x1
        jnz     L_5dd271
        mov     al, byte ptr [edi + 0x1c4]
        test    al, al
        jnz     L_5dd271
        mov     eax, dword ptr [esi + 0x408]
        test    eax, eax
        jz      L_5dd271
        mov     eax, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        mov     byte ptr [edi + 0x1c4], 0x1
        call    dword ptr [eax + 0x10c]
L_5dd271:
        pop     edi
        pop     esi
        ret
    }


}
