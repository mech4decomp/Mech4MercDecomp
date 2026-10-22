/*
 * FUN_00739FC0 (274 B) — Shutdown/cleanup routine.
 *
 * Frees a set of global object lists (calling destructors and FUN_004084E0
 * for each), deletes a critical section, and resets global state.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_856b94;
extern int   g_856a88;
extern int   g_856a80;
extern int   g_856b8c;
extern int   g_856ba4;
extern int   g_8aadc8;
extern void (__stdcall *g_76b10c)(void);   /* DeleteCriticalSection IAT */

extern void __cdecl FUN_0073A140(void);
extern void __cdecl FUN_00755930(void);
extern void __cdecl FUN_004084E0(void);
extern void __cdecl FUN_007262E0(void);
extern void __cdecl FUN_0073A900(void);
extern void __cdecl FUN_007570A0(void);
extern void __cdecl FUN_006F4230(void);
extern void __cdecl FUN_00749490(void);
extern void __cdecl FUN_006F4850(void);

__declspec(naked) void __stdcall FUN_00739FC0(void)
{
    __asm {
        mov     eax, [g_856b94]
        push    ebx
        push    ebp
        xor     ebp, ebp
        cmp     eax, ebp
        push    esi
        push    edi
        jz      L_73a011
        call    FUN_0073A140
        cmp     dword ptr [g_856b94], ebp
        jz      L_73a011
        mov     eax, [g_856a88]
        xor     ebx, ebx
        cmp     eax, ebp
        jle     L_73a011
        mov     edi, 0x856a8c
L_739fec:
        mov     esi, dword ptr [edi]
        cmp     esi, ebp
        jz      L_73a002
        mov     ecx, esi
        call    FUN_00755930
        push    esi
        call    FUN_004084E0
        add     esp, 0x4
L_73a002:
        mov     dword ptr [edi], ebp
        mov     eax, [g_856a88]
        inc     ebx
        add     edi, 0x4
        cmp     ebx, eax
        jl      L_739fec
L_73a011:
        mov     eax, [g_856a80]
        cmp     eax, ebp
        jz      L_73a06e
        mov     esi, dword ptr [eax]
        cmp     esi, ebp
        mov     eax, esi
        jz      L_73a03e
L_73a01c:
        mov     edi, dword ptr [eax + 0xc]
        cmp     edi, ebp
        mov     esi, dword ptr [esi + 0x4]
        jz      L_73a03e
        mov     ecx, edi
        call    FUN_007262E0
        push    edi
        call    FUN_004084E0
        add     esp, 0x4
        __emit 0xEB          /* backward jmp L_73a01c: MSVC6 miscomputes rel-offset (off-by-6) due to call-reloc between branch and target */
        __emit 0xDE
L_73a03e:
        mov     esi, dword ptr [g_856a80]
        cmp     esi, ebp
        jz      L_73a068
L_73a048:
        mov     eax, dword ptr [esi]
        cmp     eax, ebp
        jz      L_73a05f
L_73a04e:
        mov     eax, dword ptr [eax + 0xc]
        push    eax
        mov     ecx, esi
        call    FUN_0073A900
        mov     eax, dword ptr [esi]
        cmp     eax, ebp
        jnz     L_73a04e
L_73a05f:
        push    esi
        call    FUN_004084E0
        add     esp, 0x4
L_73a068:
        mov     dword ptr [g_856a80], ebp
L_73a06e:
        mov     esi, dword ptr [g_856b8c]
        cmp     esi, ebp
        jz      L_73a099
        mov     ecx, esi
        call    FUN_007570A0
        push    esi
        call    FUN_004084E0
        add     esp, 0x4
        push    0x858ac8
        mov     dword ptr [g_856b8c], ebp
        call    dword ptr [g_76b10c]
L_73a099:
        mov     eax, [g_856ba4]
        cmp     eax, ebp
        mov     dword ptr [g_856b94], ebp
        jz      L_73a0b4
        push    eax
        call    FUN_006F4230
        mov     dword ptr [g_856ba4], ebp
L_73a0b4:
        call    FUN_00749490
        mov     ecx, dword ptr [g_8aadc8]
        push    0x1
        push    ecx
        call    FUN_006F4850
        pop     edi
        pop     esi
        mov     dword ptr [g_8aadc8], ebp
        pop     ebp
        pop     ebx
        ret
    }
}
