/*
 * FUN_1000c220 (330 B) - __stdcall. Initializes the stats object's
 * per-category text buffer (param_1+0x40 gate), appends the category name
 * (param_1+0x4c/0x58) and a separator string @ 0x100262dc, then frees the
 * object's auxiliary buffers. Uses an SEH frame (handler @ 0x1001f99b).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_100210ec;            /* free IAT @ 0x100210ec */
extern void *g_100210f4;            /* wcslen IAT @ 0x100210f4 */
extern void *g_1001f99b;            /* SEH handler @ 0x1001f99b */
extern unsigned short g_100262dc[]; /* @ 0x100262dc */
extern unsigned short g_100274ec[]; /* @ 0x100274ec */
extern void FUN_100016b0(void);
extern void FUN_1000a110(void);

__declspec(naked) void __cdecl FUN_1000c220(void)
{
    __asm {
        mov     eax, fs:[0]
        push    -1
        push    offset g_1001f99b
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x98
        push    ebx
        mov     ebx, dword ptr [g_100210ec]
        push    esi
        mov     esi, dword ptr [esp + 0xb0]
        push    edi
        xor     edi, edi
        cmp     dword ptr [esi + 0x40], edi
        jnz     L310
        mov     eax, dword ptr [esi + 0x44]
        cmp     eax, edi
        jz      L266
        mov     ecx, dword ptr [esi + 0x3c]
        push    eax
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x24]
L266:
        mov     dword ptr [esp + 0x10], edi
        mov     dword ptr [esp + 0x14], edi
        mov     dword ptr [esp + 0x20], 0x400
        mov     eax, dword ptr [esi + 0x58]
        mov     dword ptr [esp + 0xac], edi
        cmp     eax, edi
        mov     dword ptr [esp + 0xc], edi
        mov     dword ptr [esp + 0x1c], edi
        mov     dword ptr [esp + 0x18], edi
        jbe     L29E
        mov     ecx, dword ptr [esi + 0x4c]
        push    eax
        push    ecx
        lea     ecx, [esp + 0x14]
        call    FUN_100016b0
L29E:
        mov     eax, offset g_100262dc
        test    eax, eax
        jz      L2CB
        cmp     word ptr [g_100262dc], di
        jz      L2CB
        push    eax
        call    dword ptr [g_100210f4]
        add     esp, 0x4
        lea     ecx, [esp + 0xc]
        shl     eax, 0x1
        push    eax
        push    offset g_100262dc
        call    FUN_100016b0
L2CB:
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, edi
        mov     eax, dword ptr [esp + 0xc]
        ja      L2DC
        mov     eax, offset g_100274ec
L2DC:
        mov     ecx, dword ptr [esi + 0x3c]
        push    eax
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x20]
        mov     dword ptr [esp + 0xac], 0xffffffff
        cmp     dword ptr [esp + 0x18], edi
        jbe     L304
        mov     eax, dword ptr [esp + 0xc]
        cmp     eax, edi
        jz      L304
        push    eax
        call    ebx
        add     esp, 0x4
L304:
        mov     dword ptr [esp + 0xc], edi
        mov     dword ptr [esp + 0x1c], edi
        mov     dword ptr [esp + 0x18], edi
L310:
        mov     eax, dword ptr [esi + 0x48]
        cmp     eax, edi
        jz      L320
        push    eax
        call    FUN_1000a110
        add     esp, 0x4
L320:
        mov     eax, dword ptr [esi + 0x30]
        cmp     eax, edi
        jz      L330
        push    eax
        call    ebx
        add     esp, 0x4
        mov     dword ptr [esi + 0x30], edi
L330:
        mov     eax, dword ptr [esi + 0x34]
        cmp     eax, edi
        jz      L340
        push    eax
        call    ebx
        add     esp, 0x4
        mov     dword ptr [esi + 0x34], edi
L340:
        mov     eax, dword ptr [esi + 0x38]
        cmp     eax, edi
        jz      L350
        push    eax
        call    ebx
        add     esp, 0x4
        mov     dword ptr [esi + 0x38], edi
L350:
        mov     ecx, dword ptr [esp + 0xa4]
        pop     edi
        pop     esi
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0xa4
        ret     0x4
    }
}
