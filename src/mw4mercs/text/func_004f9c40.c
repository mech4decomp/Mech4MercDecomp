/*
 * FUN_004f9c40 (172 B) — __thiscall constructor (RET 0x10, 4 args).
 * Calls FUN_004d9940, initializes sub-object at this+0x2b0 via
 * FUN_0041fc80, sets vtable ptrs 0x773328 / 0x775b3c and many fields.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8d90;
extern int g_007b8d88;
extern int g_007b8d8c;

extern void FUN_004d9940(void);
extern void FUN_0041fc80(void);

__declspec(naked) void FUN_004f9c40(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x8]
        push    ebx
        push    esi
        push    edi
        push    eax
        mov     eax, dword ptr [esp + 0x14]
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x1c]
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_004d9940
        xor     ebx, ebx
        lea     edi, [esi + 0x2b0]
        push    ebx
        mov     ecx, edi
        mov     dword ptr [esi + 0x298], ebx
        mov     dword ptr [esi + 0x29c], ebx
        mov     dword ptr [esi + 0x2a0], ebx
        mov     dword ptr [esi + 0x2a8], ebx
        mov     dword ptr [esi + 0x2ac], 0x2000
        call    FUN_0041fc80
        mov     eax, [g_007b8d90]
        mov     ecx, dword ptr [g_007b8d88]
        mov     edx, dword ptr [g_007b8d8c]
        mov     dword ptr [edi], 0x773328
        mov     dword ptr [esi], 0x775b3c
        mov     byte ptr [esi + 0x168], bl
        mov     dword ptr [esi + 0x16c], ebx
        mov     byte ptr [esi + 0x174], 0x1
        mov     byte ptr [esi + 0x198], bl
        mov     dword ptr [esi + 0x2c0], eax
        pop     edi
        mov     dword ptr [esi + 0x2b8], ecx
        mov     dword ptr [esi + 0x2bc], edx
        mov     dword ptr [esi + 0x294], 0x44fa0000
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0x10
    }
}
