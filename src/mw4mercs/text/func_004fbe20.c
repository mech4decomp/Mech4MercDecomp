/*
 * FUN_004FBE20 (171 B) — __fastcall (ecx=this) constructor. Initializes
 * an Adept object: vtable 0x76cd9c, zeroes a 0x12-entry table at this+0x10,
 * calls FUN_004fd3c0 per entry, then switches vtable to 0x775ea0 and
 * cleans up. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dc8d0;    /* 0x007dc8d0 */
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_004fd730(void);
extern void __cdecl FUN_004fd3c0(void);

__declspec(naked) void * __stdcall FUN_004fbe20(void)
{
    __asm {
        sub     esp, 0x8
        mov     eax, dword ptr [g_7dc8d0]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        push    eax
        call    FUN_00415180
        xor     ebx, ebx
        push    ebx
        lea     ecx, [esp + 0x14]
        mov     dword ptr [edi + 0x8], ebx
        mov     dword ptr [edi + 0xc], ebx
        mov     dword ptr [edi], 0x76cd9c
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x18], ebx
        call    FUN_004fd730
        lea     esi, [edi + 0x10]
        mov     eax, esi
        mov     ecx, 0x12
    l_zero:
        mov     dword ptr [eax], ebx
        mov     dword ptr [eax + 0x4], ebx
        add     eax, 0x8
        dec     ecx
        jnz     l_zero
        mov     ebx, esi
        mov     ebp, 0x12
    l_init:
        lea     ecx, [esp + 0x10]
        cmp     ebx, ecx
        jz      l_skip
        lea     edx, [esp + 0x10]
        push    edx
        mov     ecx, ebx
        call    FUN_004fd3c0
    l_skip:
        add     ebx, 0x8
        dec     ebp
        jnz     l_init
        mov     ecx, dword ptr [esp + 0x10]
        xor     ebp, ebp
        cmp     ecx, ebp
        jz      l_after
        mov     eax, dword ptr [ecx]
        push    0x3
        call    dword ptr [eax]
    l_after:
        mov     dword ptr [edi], 0x775ea0
        mov     ebx, 0x12
    l_cleanup:
        cmp     dword ptr [esi + 0x4], ebp
        jz      l_cleanup_next
        mov     ecx, dword ptr [esi]
        cmp     ecx, ebp
        jz      l_cleanup_zero
        mov     edx, dword ptr [ecx]
        push    0x3
        call    dword ptr [edx]
    l_cleanup_zero:
        mov     dword ptr [esi], ebp
        mov     dword ptr [esi + 0x4], ebp
    l_cleanup_next:
        add     esi, 0x8
        dec     ebx
        jnz     l_cleanup
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret
    }
}
