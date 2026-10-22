/*
 * FUN_00756c40 (183 B) — Destructor that tears down an object (this in ECX)
 * under a critical section (0x00858ac8), freeing sub-objects and calling
 * cleanup helpers based on field flags.
 *
 * __fastcall (ECX = this), RET (no stack cleanup).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_cs_858ac8[];
extern void *g_ptr_8aadc8;
extern void (__stdcall *g_pfn_76b110)(void *);   /* EnterCriticalSection IAT */
extern void (__stdcall *g_pfn_76b100)(void *);   /* LeaveCriticalSection IAT */

extern void __cdecl FUN_00757c70(int);
extern void __cdecl FUN_00740db0(int);
extern void __cdecl FUN_006f4940(void *, int, int);
extern void __cdecl FUN_00727150(int);

__declspec(naked) void __fastcall FUN_00756c40(int *this)
{
    __asm {
        push    esi
        push    edi
        push    offset g_cs_858ac8
        mov     esi, ecx
        call    dword ptr [g_pfn_76b110]
        mov     edi, dword ptr [esi]
        test    edi, edi
        jz      Lend
        push    edi
        call    FUN_00757c70
        mov     eax, dword ptr [esi + 4]
        test    eax, eax
        jz      L1
        push    eax
        call    FUN_00740db0
L1:
        mov     al, byte ptr [esi + 0x99]
        test    al, al
        jnz     L2
        push    edi
        call    FUN_00740db0
        mov     eax, dword ptr [esi + 0x70]
        test    eax, eax
        jz      Lend
        mov     eax, dword ptr [esi + 0x9C]
        test    eax, eax
        jz      Lend
        cmp     eax, 1
        jz      Lend
        mov     al, byte ptr [esi + 0x9A]
        test    al, al
        jnz     Lend
        mov     eax, dword ptr [esi + 0x10]
        mov     ecx, dword ptr [g_ptr_8aadc8]
        push    1
        neg     eax
        push    eax
        push    ecx
        call    FUN_006f4940
        jmp     Lend
L2:
        mov     eax, dword ptr [esi + 0x9C]
        test    eax, eax
        jz      L3
        cmp     eax, 1
        jnz     Lend
L3:
        mov     ecx, dword ptr [esi + 0x70]
        test    ecx, ecx
        push    edi
        jz      L4
        call    FUN_00727150
        jmp     Lend
L4:
        call    FUN_00740db0
Lend:
        push    offset g_cs_858ac8
        mov     dword ptr [esi + 4], 0
        mov     dword ptr [esi], 0
        mov     byte ptr [esi + 0x9A], 0
        mov     byte ptr [esi + 0x74], 0
        call    dword ptr [g_pfn_76b100]
        pop     edi
        pop     esi
        ret
    }
}
