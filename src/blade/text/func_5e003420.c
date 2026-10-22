/*
 * FUN_5e003420 (286 B) — DirectDraw wrapper: release/cleanup method.
 * Decrements a refcount at obj+0x41f0; when it hits 0, removes an entry
 * from a global array, releases several sub-objects via their vtables,
 * and frees the object.
 *
 * __stdcall, RET 0x4 (1 stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77a508;   /* global count */
extern int g_5e77a4c8;   /* global array base */
extern void __cdecl FUN_5e0025f0(void);
extern void __cdecl FUN_5e02b453(void);

__declspec(naked) void __stdcall FUN_5e003420(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi + 0x41f0]
        dec     eax
        mov     dword ptr [esi + 0x41f0], eax
        jnz     L_end
        push    ebx
        xor     ebx, ebx
        cmp     esi, ebx
        jz      L448
        lea     eax, [esi + 0x4]
        mov     dword ptr [esp + 0xc], eax
        jmp     L44c
    L448:
        mov     dword ptr [esp + 0xc], ebx
    L44c:
        mov     edx, dword ptr [g_5e77a508]
        push    edi
        xor     edi, edi
        cmp     edx, ebx
        jle     L488
        push    ebp
        lea     eax, [edx*4 + g_5e77a4c8]
        mov     ecx, OFFSET g_5e77a4c8
        mov     ebp, dword ptr [esp + 0x14]
    L466:
        cmp     dword ptr [ecx], ebp
        jnz     L479
        mov     ebp, dword ptr [eax - 0x4]
        dec     edx
        sub     eax, 0x4
        mov     dword ptr [ecx], ebp
        mov     dword ptr [eax], ebx
    L479:
        inc     edi
        add     ecx, 0x4
        cmp     edi, edx
        __emit 0x7C   /* __emit: MSVC6 miscomputes backward jl rel-offset by 4 (reloc sits between branch and target) */
        __emit 0xE5
        mov     dword ptr [g_5e77a508], edx
        pop     ebp
    L488:
        mov     eax, dword ptr [esi + 0x4270]
        pop     edi
        cmp     eax, ebx
        jz      L49f
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x8]
        mov     dword ptr [esi + 0x4270], ebx
    L49f:
        mov     eax, dword ptr [esi + 0x42f8]
        cmp     eax, ebx
        jz      L4b5
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 0x8]
        mov     dword ptr [esi + 0x42f8], ebx
    L4b5:
        mov     eax, dword ptr [esi + 0x4380]
        cmp     eax, ebx
        jz      L4cb
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x8]
        mov     dword ptr [esi + 0x4380], ebx
    L4cb:
        mov     eax, dword ptr [esi + 0x41e8]
        cmp     eax, ebx
        jz      L4e1
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 0x8]
        mov     dword ptr [esi + 0x41e8], ebx
    L4e1:
        mov     eax, dword ptr [esi + 0x41e4]
        cmp     eax, ebx
        jz      L4f7
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x8]
        mov     dword ptr [esi + 0x41e4], ebx
    L4f7:
        mov     eax, dword ptr [esi + 0x41e0]
        cmp     eax, ebx
        jz      L50d
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 0x8]
        mov     dword ptr [esi + 0x41e0], ebx
    L50d:
        mov     eax, dword ptr [esi + 0x41ec]
        cmp     eax, ebx
        jz      L523
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x8]
        mov     dword ptr [esi + 0x41ec], ebx
    L523:
        cmp     esi, ebx
        pop     ebx
        jz      L538
        mov     ecx, esi
        call    FUN_5e0025f0
        push    esi
        call    FUN_5e02b453
        add     esp, 0x4
    L538:
        xor     eax, eax
    L_end:
        pop     esi
        ret     0x4
    }
}
