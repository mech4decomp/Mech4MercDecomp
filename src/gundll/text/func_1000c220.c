/*
 * FUN_1000C220 (99 B) - __stdcall, RET 0x8.  Reallocates/grows a "ZmMe"
 * magic buffer: if param_1 non-null, HeapReAlloc (0x10049080) to
 * param_1+0xc; else HeapAlloc (0x10049074) of 0xc.  Stamps the "ZmMe"
 * magic at +0 and "ZEnd" at +size+8, stores size at +4.  (Transcribed
 * from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049078;   /* IAT: GetProcessHeap */
extern void *g_10049080;   /* IAT: HeapReAlloc */
extern void *g_10049074;   /* IAT: HeapAlloc */

__declspec(naked) void __stdcall FUN_1000C220(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        test    eax, eax
        push    esi
        je      short L_1000c24a
        add     eax, -8
        test    eax, eax
        je      short L_1000c24a
        mov     esi, dword ptr [esp + 0xc]
        lea     ecx, [esi + 0xc]
        push    ecx
        push    eax
        push    0
        call    dword ptr [g_10049078]
        push    eax
        call    dword ptr [g_10049080]
        jmp     short L_1000c261
L_1000c24a:
        mov     esi, dword ptr [esp + 0xc]
        lea     edx, [esi + 0xc]
        push    edx
        push    0
        call    dword ptr [g_10049078]
        push    eax
        call    dword ptr [g_10049074]
L_1000c261:
        test    eax, eax
        je      short L_1000c27d
        mov     dword ptr [eax + 4], esi
        mov     dword ptr [eax], 0x6d654d5a
        mov     dword ptr [eax + esi + 8], 0x646e455a
        add     eax, 8
        pop     esi
        ret     8
L_1000c27d:
        xor     eax, eax
        pop     esi
        ret     8
    }
}
