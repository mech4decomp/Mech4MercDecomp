/*
 * FUN_005a6b50 (63 B) — __thiscall method.
 *
 * Calls FUN_005f07c0(), stores result at this+0x1b0,
 * calls a virtual method on the returned object+0x78,
 * then calls FUN_005f0940(). If true, subtracts a float
 * from another float.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __fastcall FUN_005f07c0(void);
extern int __fastcall FUN_005f0940(void);

__declspec(naked) void __fastcall FUN_005a6b50(void)
{
    
__asm {
push    esi
        push    edi
        mov     esi, ecx
        call    FUN_005f07c0
        lea     ecx, [eax + 0x78]
        mov     dword ptr [esi + 0x1b0], eax
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 4]
        mov     ecx, esi
        mov     edi, eax
        call    FUN_005f0940
        test    al, al
        jz      done
        fld     dword ptr [edi + 0x648]
        mov     esi, dword ptr [esi + 0x1b0]
        fsubr   dword ptr [esi + 0x3b8]
        fstp    dword ptr [esi + 0x3b8]
done:
        pop     edi
        pop     esi
        ret
    }


}
