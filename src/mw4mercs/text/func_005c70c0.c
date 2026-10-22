/*
 * FUN_005C70C0 (164 B) — __thiscall (ECX=this), RET 8 (two stack params).
 *
 * Checks a cache (FUN_005c7170) and a range (param_2[1]-param_2[0]);
 * if invalid calls FUN_00683bc0. Otherwise computes a distance and
 * dispatches to one of several handlers based on thresholds.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char __stdcall FUN_005c7170(int param);
extern int __fastcall FUN_005dbe50(void *this);
extern int __stdcall FUN_00637b40(int param);
extern float __fastcall FUN_00637a20(void *this);
extern void __cdecl FUN_006839e0(void *arg);
extern void __cdecl FUN_00683b90(void);
extern void __cdecl FUN_006836f0(int param1, void *param2);
extern void __cdecl FUN_00683bc0(void *arg);

__declspec(naked) void __fastcall FUN_005c70c0(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 8]
        push    esi
        push    edi
        mov     esi, ecx
        push    ebx
        call    FUN_005c7170
        cmp     al, 1
        mov     edi, dword ptr [esp + 0x14]
        jz      L7155
        mov     eax, dword ptr [edi + 4]
        sub     eax, dword ptr [edi]
        test    eax, 0xFFFFFFFC
        jz      L7155
        mov     ecx, esi
        call    FUN_005dbe50
        mov     dword ptr [esp + 0x10], eax
        fild    dword ptr [esp + 0x10]
        push    0x55
        fstp    dword ptr [esp + 0x14]
        call    FUN_00637b40
        mov     ecx, eax
        call    FUN_00637a20
        fcomp   dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 0x41
        jnz     L711E
        push    edi
        call    FUN_006839e0
        add     esp, 4
        pop     edi
        pop     esi
        pop     ebx
        ret     8
    L711E:
        push    0x56
        call    FUN_00637b40
        mov     ecx, eax
        call    FUN_00637a20
        fcomp   dword ptr [esp + 0x10]
        push    edi
        fnstsw  ax
        test    ah, 0x41
        jnz     L7146
        call    FUN_00683b90
        add     esp, 4
        pop     edi
        pop     esi
        pop     ebx
        ret     8
    L7146:
        push    ebx
        call    FUN_006836f0
        add     esp, 8
        pop     edi
        pop     esi
        pop     ebx
        ret     8
    L7155:
        push    edi
        call    FUN_00683bc0
        add     esp, 4
        pop     edi
        pop     esi
        pop     ebx
        ret     8
    }
}
