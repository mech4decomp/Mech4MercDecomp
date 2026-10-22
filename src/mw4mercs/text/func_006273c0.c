/*
 * FUN_006273c0 (90 B) — __thiscall (ECX = this), RET 0x4 (1 stack param).
 * Computes two float-derived ints via _ftol (0x0075db4a), stores them into
 * this+0xe0 / this+0x78 and into pointed-to objects, and stores a float
 * into this+0x110->0x50.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0078d01c;
extern float g_0076d048;
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void __stdcall FUN_006273c0(void)
{
    __asm {
        fld     dword ptr [g_0078d01c]
        push    esi
        fmul    dword ptr [esp + 0x8]
        mov     esi, ecx
        call    FUN_0075db4a
        fld     dword ptr [esp + 0x8]
        fdiv    dword ptr [esi + 0x68]
        mov     ecx, dword ptr [esp + 0x8]
        mov     edx, dword ptr [esi + 0x144]
        mov     dword ptr [esi + 0xe0], eax
        mov     eax, dword ptr [esi + 0x160]
        mov     dword ptr [eax + 0x7c], ecx
        mov     eax, ecx
        mov     dword ptr [edx + 0x60], eax
        fmul    dword ptr [g_0076d048]
        call    FUN_0075db4a
        mov     ecx, dword ptr [esi + 0x110]
        mov     dword ptr [esp + 0x8], eax
        fild    dword ptr [esp + 0x8]
        mov     dword ptr [esi + 0x78], eax
        pop     esi
        fstp    dword ptr [ecx + 0x50]
        ret     0x4
    }
}
