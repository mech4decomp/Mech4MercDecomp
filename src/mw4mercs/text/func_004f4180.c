/*
 * FUN_004F4180 (60 B) — MLR/Adept object constructor. __thiscall (ECX = this),
 * RET 0x10 (4 stack params). Calls FUN_004f4580(a,b,c,d), sets 16-bit fields
 * at +0x17c/+0x17e, installs vtable 0x7751e4, returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004f4580(void);

__declspec(naked) void * __fastcall FUN_004f4180(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x8]
        push    esi
        push    eax
        mov     eax, dword ptr [esp + 0xc]
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x14]
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_004f4580
        mov     word ptr [esi + 0x17c], 0xffff
        mov     word ptr [esi + 0x17e], 0x0
        mov     dword ptr [esi], 0x7751e4
        mov     eax, esi
        pop     esi
        ret     0x10
    }
}
