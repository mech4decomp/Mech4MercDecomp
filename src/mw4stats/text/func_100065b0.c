/*
 * FUN_100065b0 (103 B) - __fastcall (ECX = this). Allocates a 0x1028-byte
 * buffer, initializes vtable/fields, and calls an init method via the
 * buffer's vtable. Returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_100210f8; /* IAT: malloc */
extern void *g_10021294; /* vtable ptr */
extern void *g_1002128c; /* vtable ptr */
extern void *g_10021288; /* vtable ptr */
extern char g_10025304[]; /* "Initialization" string */

__declspec(naked) void * __cdecl FUN_100065b0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    0x1028
        mov     dword ptr [esi], offset g_10021294
        call    dword ptr [g_100210f8]
        xor     ecx, ecx
        add     esp, 0x4
        cmp     eax, ecx
        jz      L_f6
        mov     dword ptr [eax + 4], ecx
        mov     dword ptr [eax + 8], 0x400
        mov     dword ptr [eax], offset g_1002128c
        mov     dword ptr [eax + 0xc], offset g_10021288
        mov     dword ptr [eax + 0x1020], ecx
        mov     dword ptr [eax + 0x1024], 3
        jmp     L_f8
    L_f6:
        xor     eax, eax
    L_f8:
        mov     dword ptr [esi + 4], eax
        mov     edx, dword ptr [eax + 0xc]
        add     eax, 0xc
        push    offset g_10025304
        push    ecx
        push    ecx
        push    0xffffd8f3
        push    eax
        call    dword ptr [edx]
        add     esp, 0x14
        mov     eax, esi
        pop     esi
        ret
    }
}
