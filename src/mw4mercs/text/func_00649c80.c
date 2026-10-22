/*
 * FUN_00649c80 (226 B) — Global object pool teardown/rebuild.
 * Decrements a global counter, frees sub-objects, and re-seeds
 * the pool head from a static array.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f4230(void *ptr);
extern void __cdecl FUN_004084e0(void *ptr);

extern int  g_8058e8;   /* 0x008058e8 counter */
extern void *g_8058d0;  /* 0x008058d0 pool head */
extern int  g_8058c8;   /* 0x008058c8 */
extern int  g_8058cc;   /* 0x008058cc */
extern int  g_7f4b5c;   /* 0x007f4b5c array */
extern int  g_7f4a50;   /* 0x007f4a50 array */
extern char g_7f4a4c;   /* 0x007f4a4c array */
extern int  g_7f4a54;   /* 0x007f4a54 array */

__declspec(naked) int __stdcall FUN_00649c80(void)
{
    __asm {
        mov     eax, dword ptr [g_8058e8]
        push    edi
        xor     edi, edi
        cmp     eax, edi
        jnz     L_91
        or      eax, 0xffffffff
        pop     edi
        ret
L_91:
        push    esi
        mov     esi, dword ptr [g_8058d0]
        mov     ecx, dword ptr [esi + 4]
        cmp     ecx, edi
        jz      L_ad
        push    ecx
        call    FUN_006f4230
        mov     eax, dword ptr [g_8058e8]
        mov     dword ptr [esi + 4], edi
L_ad:
        mov     ecx, dword ptr [esi + 0x10]
        cmp     ecx, edi
        jz      L_c5
        push    ecx
        call    FUN_004084e0
        mov     eax, dword ptr [g_8058e8]
        add     esp, 4
        mov     dword ptr [esi + 0x10], edi
L_c5:
        mov     esi, dword ptr [g_8058d0]
        cmp     esi, edi
        jz      L_d09
        mov     eax, dword ptr [esi + 4]
        cmp     eax, edi
        mov     dword ptr [esi], 0x792900
        jz      L_e5
        push    eax
        call    FUN_006f4230
        mov     dword ptr [esi + 4], edi
L_e5:
        mov     eax, dword ptr [esi + 0x10]
        cmp     eax, edi
        jz      L_f8
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi + 0x10], edi
L_f8:
        push    esi
        mov     dword ptr [esi + 4], edi
        call    FUN_004084e0
        mov     eax, dword ptr [g_8058e8]
        add     esp, 4
L_d09:
        mov     ecx, eax
        shl     ecx, 5
        add     ecx, eax
        lea     edx, [eax + ecx*2]
        dec     eax
        cmp     eax, edi
        mov     dword ptr [g_8058d0], edi
        mov     dword ptr [edx*4 + g_7f4b5c], edi
        mov     dword ptr [g_8058e8], eax
        pop     esi
        jle     L_d5e
        mov     ecx, eax
        shl     ecx, 5
        add     ecx, eax
        lea     eax, [eax + ecx*2]
        shl     eax, 2
        mov     edx, dword ptr [eax + g_7f4a50]
        xor     ecx, ecx
        mov     cl, byte ptr [eax + g_7f4a4c]
        mov     dword ptr [g_8058d0], edx
        mov     edx, dword ptr [eax + g_7f4a54]
        mov     dword ptr [g_8058c8], edx
        mov     dword ptr [g_8058cc], ecx
L_d5e:
        xor     eax, eax
        pop     edi
        ret
    }
}
