/*
 * FUN_005a1410 (68 B) — Cleanup/reset function.
 *
 * __thiscall (ECX = this), RET (no stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __stdcall FUN_0041fd80(void);
extern void   __stdcall FUN_0041fcb0(void);

__declspec(naked) void __fastcall FUN_005a1410(int this_ptr)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0xe0]
        mov     eax, dword ptr [ecx]
        push    0x0
        push    0x1
        call    dword ptr [eax + 0x4]
        add     esi, 0x520
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        jz      done
        mov     ecx, esi
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0xe0]
        mov     edx, dword ptr [eax]
        push    0x0
        push    0x5
        mov     ecx, eax
        call    dword ptr [edx + 0x4]
        mov     ecx, esi
        call    FUN_0041fcb0
done:
        pop     esi
        ret
    }
}
