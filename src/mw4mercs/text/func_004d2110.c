/*
 * FUN_004d2110 (167 B) — MLR network subsystem: init a renderer-table object
 * and look up a renderer by name. __thiscall (this=ECX), RET 0xc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041e690(void);
extern void __cdecl FUN_004cff20(void);
extern void __cdecl FUN_00413c70(void);

extern unsigned short g_007db0ac;
extern unsigned short g_007db0ae;

__declspec(naked) void FUN_004d2110(void)
{
    __asm {
        push    esi
        push    edi
        push    0x0
        push    0x0
        mov     esi, ecx
        push    0x0
        call    FUN_0041e690
        mov     ax, word ptr [g_007db0ac]
        mov     cx, word ptr [g_007db0ae]
        mov     edi, dword ptr [esp + 0x10]
        mov     word ptr [esi + 0x40], ax
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        mov     word ptr [esi + 0x42], cx
        mov     dword ptr [esi], 0x772570
        jz      L_4d218e
        push    eax
        call    FUN_004cff20
        mov     edx, dword ptr [edi + 0x10]
        mov     dword ptr [esi + 0x28], eax
        mov     eax, dword ptr [esp + 0x18]
        add     esp, 0x4
        lea     ecx, [esi + 0x20]
        push    eax
        mov     dword ptr [ecx], edx
        call    FUN_00413c70
        test    al, al
        jz      L_4d2195
        mov     cx, word ptr [edi + 0x1a]
        mov     dx, word ptr [esi + 0x24]
        mov     word ptr [esi + 0x40], cx
        mov     word ptr [esi + 0x42], dx
        mov     eax, dword ptr [esi + 0x38]
        mov     dword ptr [esi + 0x14], eax
        mov     dword ptr [esi + 0x10], eax
        mov     eax, dword ptr [esi + 0x34]
        mov     dword ptr [esi + 0x1c], eax
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0xc
L_4d218e:
        mov     dword ptr [esi + 0x28], 0x0
L_4d2195:
        mov     cx, word ptr [edi + 0x1a]
        mov     edx, dword ptr [edi + 0x10]
        pop     edi
        mov     word ptr [esi + 0x40], cx
        mov     dword ptr [esi + 0x20], edx
        mov     dword ptr [esi + 0x3c], 0x0
        mov     word ptr [esi + 0x24], 0xffff
        mov     eax, esi
        pop     esi
        ret     0xc
    }
}
