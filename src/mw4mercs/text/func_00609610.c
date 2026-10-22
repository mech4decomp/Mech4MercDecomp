/*
 * FUN_00609610 (54 B) — __thiscall (ECX = this), RET 4.
 * Decrements a refcount at [obj+0x30]; when it drops below 1,
 * calls FUN_00415ca0(obj) then virtual call (*(obj))(1).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_00416b60(void *param);
extern void __cdecl FUN_00415ca0(void *obj);

__declspec(naked) void __stdcall FUN_00609610(void *param)
{
    __asm {
        push    esi
        push    edi
        lea     eax, [esp + 0xc]
        mov     edi, ecx
        push    eax
        call    FUN_00416b60
        mov     esi, eax
        test    esi, esi
        jz      L_done
        mov     ecx, dword ptr [esi + 0x30]
        dec     ecx
        mov     eax, ecx
        test    eax, eax
        mov     dword ptr [esi + 0x30], ecx
        jg      L_done
        push    esi
        mov     ecx, edi
        call    FUN_00415ca0
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx]
    L_done:
        pop     edi
        pop     esi
        ret     0x4
    }
}
