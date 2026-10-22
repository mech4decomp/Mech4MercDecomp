/*
 * func_0050A480 - 97 bytes
 * Constructor - initializes object fields
 */
__declspec(naked) void func_0050A480()
{
    

extern void __cdecl FUN_0050c97e(void);
__asm {
push    ecx
        xor     eax, eax
        push    esi
        mov     esi, ecx
        mov     cl, [esp + 7]
        mov     [esi], eax
        mov     [esi + 8], cl
        mov     [esi + 8], eax
        mov     ecx, [esi]
        mov     [esi + 4], eax
        mov     [esi + 4], ecx
        mov     ecx, 1
        mov     [esi + 0x15], cl
        mov     [esi + 0x28], cl
        mov     [esi + 0x20], cl
        mov     [esi + 0x3C], ecx
        mov     [esi + 0x44], ecx
        mov     ecx, esi
        mov     [esi + 0x0C], eax
        mov     [esi + 0x10], eax
        mov     [esi + 0x14], al
        mov     [esi + 0x1C], eax
        mov     [esi + 0x29], al
        mov     [esi + 0x18], eax
        mov     dword ptr [esi + 0x2C], -1
        mov     dword ptr [esi + 0x24], 0x3E800000
        mov     dword ptr [esi + 0x40], 2
        call FUN_0050c97e
        mov     eax, esi
        pop     esi
        pop     ecx
        ret
    }


}
