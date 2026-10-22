/*
 * FUN_004d1f80 (116 B) — MLR network subsystem: init a renderer-table object
 * with a source short-pair. __thiscall (this=ECX), RET 0x8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041e690(void);
extern void __cdecl FUN_00416f60(void);
extern void __cdecl FUN_00413be0(void);
extern unsigned int g_007db0b8;

__declspec(naked) void FUN_004d1f80(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        push    0x0
        push    0x0
        mov     esi, ecx
        push    0x0
        call    FUN_0041e690
        mov     eax, dword ptr [esp + 0x10]
        mov     cx, word ptr [eax]
        mov     di, word ptr [eax + 0x2]
        mov     eax, dword ptr [g_007db0b8]
        mov     word ptr [esi + 0x40], cx
        xor     edx, edx
        mov     dx, word ptr [esi + 0x40]
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     word ptr [esi + 0x42], di
        lea     ecx, [eax + 0x14]
        mov     dword ptr [esi], 0x772570
        lea     ebx, [esi + 0x20]
        mov     dword ptr [esp + 0x14], edx
        call    FUN_00416f60
        mov     edx, dword ptr [eax + 0x10]
        mov     eax, dword ptr [esp + 0x14]
        push    eax
        mov     ecx, ebx
        mov     dword ptr [ebx], edx
        mov     word ptr [esi + 0x24], di
        call    FUN_00413be0
        mov     eax, dword ptr [esi + 0x38]
        mov     ecx, dword ptr [esi + 0x34]
        mov     dword ptr [esi + 0x14], eax
        mov     dword ptr [esi + 0x10], eax
        pop     edi
        mov     dword ptr [esi + 0x1c], ecx
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0x8
    }
}
