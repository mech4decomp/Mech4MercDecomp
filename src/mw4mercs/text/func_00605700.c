/*
 * FUN_00605700 (59 B) — __thiscall helper: initializes sub-objects and
 * conditionally chains a third call.
 *
 * __thiscall (ECX = this). No stack params, RET (no cleanup).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fcd0(void *param);

__declspec(naked) void __stdcall FUN_00605700(void *this)
{
    __asm {
        push    esi
        lea     esi, [ecx + 0x20]
        push    edi
        mov     ecx, esi
        call    FUN_0041fd80
        lea     edi, [eax + 0x14]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        mov     ecx, esi
        jz      L_skip
        call    FUN_0041fcb0
        mov     ecx, edi
        call    FUN_0041fd80
        push    eax
        mov     ecx, esi
        call    FUN_0041fcd0
        pop     edi
        pop     esi
        ret
    L_skip:
        call    FUN_0041fcb0
        pop     edi
        pop     esi
        ret
    }
}
