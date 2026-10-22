/*
 * FUN_00627300 (137 B) — __thiscall (ECX = this), RET 0x14 (5 stack params).
 * Stores param_1 at this+0x74, clamps it against param_2/param_3 (and a
 * global), and if it differs from obj->+0x68, updates that field, formats
 * "%dkph" via sprintf (IAT 0x76b420) and calls FUN_00560420.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_00560420(void);

extern float g_0076c5b0;
extern int   *g_0076b420;

__declspec(naked) void __fastcall FUN_00627300(void)
{
    __asm {
        fld     dword ptr [esp + 0x4]
        mov     eax, dword ptr [esp + 0x4]
        fld     dword ptr [esp + 0x4]
        mov     dword ptr [ecx + 0x74], eax
        fcomp   dword ptr [esp + 0x8]
        sub     esp, 0x10
        push    esi
        mov     esi, dword ptr [ecx + 0x124]
        fnstsw  ax
        test    ah, 0x1
        jz      l_33b
        fld     dword ptr [esp + 0x18]
        fcomp   dword ptr [esp + 0x20]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_33b
        fstp    st(0)
        fld     dword ptr [g_0076c5b0]
l_33b:
        fcom    dword ptr [esi + 0x68]
        fnstsw  ax
        test    ah, 0x40
        jnz     l_380
        fst     dword ptr [esi + 0x68]
        mov     dword ptr [esi + 0x50], 0xff
        call    FUN_0075db4a
        push    eax
        lea     ecx, [esp + 0x8]
        push    0x78d058
        push    ecx
        call    dword ptr [g_0076b420]
        mov     ecx, dword ptr [esi + 0x70]
        add     esp, 0xc
        push    0x0
        push    0x0
        lea     edx, [esp + 0xc]
        push    edx
        call    FUN_00560420
        pop     esi
        add     esp, 0x10
        ret     0x14
l_380:
        fstp    st(0)
        pop     esi
        add     esp, 0x10
        ret     0x14
    }
}
