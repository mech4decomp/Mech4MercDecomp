/*
 * FUN_00553480 (138 B) — Struct initializer with many fields.
 *
 * Takes 12+ stack params and initializes a struct at ECX.
 * Copies 0x30 bytes (12 dwords) via REP MOVSD from param_7.
 * Reads global data from 0x007dc696 and 0x007dc694.
 *
 * __thiscall (ECX = this), RET 0x30 (12 stack params)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_00553480(void)
{
    

extern int DAT_007dc696;
extern int DAT_007dc694;
__asm {
mov     edx, dword ptr [esp + 0x08]
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x04]
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp + 0x0c]
        mov     dword ptr [eax + 0x0c], ecx
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0x08], edx
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [eax + 0x14], ecx
        mov cx, word ptr [DAT_007dc696]
        mov word ptr [eax+0x1A], cx
        push    esi
        mov     esi, dword ptr [esp + 0x20]
        mov     dword ptr [eax + 0x10], edx
        mov dl, byte ptr [DAT_007dc694]
        mov     byte ptr [eax + 0x18], dl
        mov     edx, dword ptr [esp + 0x28]
        push    edi
        lea     edi, [eax + 0x1c]
        mov     ecx, 0x0c
        mov     dword ptr [eax + 0x04], 0x00000002
        rep movsd
        mov     ecx, dword ptr [esp + 0x28]
        mov     dword ptr [eax + 0x4c], edx
        mov     dword ptr [eax + 0x50], ecx
        mov     ecx, dword ptr [esp + 0x20]
        mov     dx, word ptr [ecx]
        mov     cx, word ptr [ecx + 0x02]
        mov     word ptr [eax + 0x54], dx
        mov     edx, dword ptr [esp + 0x34]
        mov     word ptr [eax + 0x56], cx
        mov     ecx, dword ptr [esp + 0x30]
        mov     dword ptr [eax + 0x58], edx
        mov     edx, dword ptr [esp + 0x38]
        pop     edi
        mov     dword ptr [eax + 0x5c], ecx
        mov     dword ptr [eax + 0x60], edx
        pop     esi
        ret     0x30
    }


}
