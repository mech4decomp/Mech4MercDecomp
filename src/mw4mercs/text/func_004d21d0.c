/*
 * FUN_004d21d0 (96 B) — MLR network subsystem: init a renderer-table object
 * from a name/version pair. __thiscall (this=ECX), RET 0x8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416f60(void);
extern void __cdecl FUN_00413be0(void);

extern unsigned int g_007db0b8;

__declspec(naked) void FUN_004d21d0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    ebx
        push    esi
        mov     esi, ecx
        mov     cx, word ptr [eax]
        xor     edx, edx
        mov     dx, cx
        push    edi
        mov     di, word ptr [eax + 0x2]
        mov     eax, dword ptr [g_007db0b8]
        mov     word ptr [esi + 0x40], cx
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     ecx, [eax + 0x14]
        mov     word ptr [esi + 0x42], di
        mov     dword ptr [esp + 0x14], edx
        lea     ebx, [esi + 0x20]
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
        pop     edi
        mov     dword ptr [esi + 0x14], eax
        mov     dword ptr [esi + 0x10], eax
        mov     dword ptr [esi + 0x1c], ecx
        pop     esi
        pop     ebx
        ret     0x8
    }
}
