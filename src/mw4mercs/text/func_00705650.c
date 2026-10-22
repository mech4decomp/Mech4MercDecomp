/*
 * FUN_00705650 (549 B) — __fastcall worker-thread loop. Waits on a mutex,
 * drains a linked list of pending items (freeing them), then for each item
 * iterates players, compares an "UpdateTime" field against a reference string
 * (inline strcmp) and dispatches a virtual update call.
 *
 * __fastcall (ECX = this), RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b214;   /* IAT: GetCurrentThread */
extern void *g_76b1fc;   /* IAT: SetThreadPriority */
extern void *g_76b0f4;   /* IAT: WaitForSingleObject */
extern void *g_76b110;   /* IAT: EnterCriticalSection */
extern void *g_76b100;   /* IAT: LeaveCriticalSection */
extern void *g_76b2d0;   /* IAT: free */
extern void *g_76b210;   /* IAT: ReleaseMutex */

extern void __cdecl FUN_006f5ed0(void);
extern void *__cdecl FUN_006f6410(void *p);
extern int  __cdecl FUN_006f8430(void);
extern char __cdecl FUN_006f7970(int idx, void *out);
extern int  __cdecl FUN_006fabf0(const char *fmt, ...);
extern void *__cdecl FUN_006f5b80(void *a, const char *b);
extern void __cdecl FUN_006f5ee0(void);

extern char g_76b9e0;    /* string literal 0x0076b9e0 */
extern char g_79fb7c;    /* string literal 0x0079fb7c */
extern char g_799ea4;    /* string literal 0x00799ea4 */
extern char g_705610;    /* function ptr 0x00705610 */
extern char g_794cc8;    /* string literal 0x00794cc8 */
extern char g_79fae8;    /* string literal 0x0079fae8 */
extern char g_771d60;    /* string literal 0x00771d60 */

__declspec(naked) void __fastcall FUN_00705650(void *p)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x10
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        push    -2
        mov     dword ptr [ebp - 0x10], esi
        call    dword ptr [g_76b214]
        push    eax
        call    dword ptr [g_76b1fc]
L_6d:
        mov     eax, dword ptr [esi + 0x28]
        push    -1
        push    eax
        call    dword ptr [g_76b0f4]
        mov     al, byte ptr [esi + 0x25]
        test    al, al
        jnz     L_70
        lea     eax, [esi + 0x4]
        push    eax
        xor     ebx, ebx
        xor     edi, edi
        call    dword ptr [g_76b110]
        mov     eax, dword ptr [esi]
        cmp     eax, ebx
        jz      L_d8
L_98:
        mov     edi, eax
        mov     ecx, dword ptr [edi + 0x11c]
        mov     al, byte ptr [edi + 0x120]
        test    al, al
        mov     dword ptr [esi], ecx
        mov     dword ptr [edi + 0x11c], ebx
        jnz     L_d8
        mov     eax, dword ptr [edi + 0x104]
        cmp     eax, ebx
        jz      L_c8
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 0x8]
        mov     dword ptr [edi + 0x104], ebx
L_c8:
        push    edi
        call    dword ptr [g_76b2d0]
        mov     eax, dword ptr [esi]
        add     esp, 0x4
        cmp     eax, ebx
        jnz     L_98
L_d8:
        lea     eax, [esi + 0x4]
        push    eax
        call    dword ptr [g_76b100]
        cmp     edi, ebx
        jz      L_6d
        call    FUN_006f5ed0
        mov     ecx, dword ptr [edi]
        lea     eax, [edi + 0x4]
        push    eax
        call    FUN_006f6410
        mov     ebx, eax
        test    ebx, ebx
        jz      L_bf
        mov     ecx, dword ptr [ebx + 0x3c]
        xor     esi, esi
        mov     dword ptr [ebp - 0xc], ecx
        mov     dword ptr [ebp - 0x8], esi
        call    FUN_006f8430
        test    eax, eax
        jle     L_bc
L_18:
        mov     ecx, dword ptr [ebp - 0xc]
        lea     eax, [ebp - 0x4]
        push    eax
        push    esi
        call    FUN_006f7970
        test    al, al
        jnz     L_3e
        push    esi
        push    offset g_76b9e0
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        jz      L_a8
        int     3
        jmp     L_a8
L_3e:
        mov     ecx, dword ptr [ebp - 0x4]
        push    offset g_79fb7c
        push    ecx
        mov     ecx, ebx
        call    FUN_006f5b80
        mov     esi, offset g_799ea4
L_53:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     L_77
        test    cl, cl
        jz      L_73
        mov     dl, byte ptr [eax + 0x1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 0x1]
        jnz     L_77
        add     eax, 0x2
        add     esi, 0x2
        test    cl, cl
        jnz     L_53
L_73:
        xor     eax, eax
        jmp     L_7c
L_77:
        sbb     eax, eax
        sbb     eax, -1
L_7c:
        test    eax, eax
        jnz     L_90
        mov     ecx, dword ptr [ebp - 0x4]
        mov     eax, dword ptr [ebx]
        push    ecx
        mov     ecx, ebx
        call    dword ptr [eax + 0x10]
        dec     dword ptr [ebp - 0x8]
        jmp     L_a5
L_90:
        mov     eax, dword ptr [ebp - 0x4]
        mov     edx, dword ptr [ebx]
        push    offset g_799ea4
        push    offset g_79fb7c
        push    eax
        mov     ecx, ebx
        call    dword ptr [edx + 0x8]
L_a5:
        mov     esi, dword ptr [ebp - 0x8]
L_a8:
        mov     ecx, dword ptr [ebp - 0xc]
        inc     esi
        mov     dword ptr [ebp - 0x8], esi
        call    FUN_006f8430
        cmp     esi, eax
        jl      L_18
L_bc:
        mov     esi, dword ptr [ebp - 0x10]
L_bf:
        call    FUN_006f5ee0
        mov     ecx, dword ptr [esi + 0x2c]
        mov     edx, dword ptr [ecx + 0x6c]
        push    -1
        push    edx
        call    dword ptr [g_76b0f4]
        test    eax, eax
        jnz     L_47
        mov     eax, dword ptr [edi + 0x104]
        mov     ecx, dword ptr [eax]
        push    0x80
        push    edi
        push    offset g_705610
        lea     edx, [edi + 0x108]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x30]
        test    eax, eax
        jge     L_1b
        call    FUN_006f5ed0
        mov     ecx, dword ptr [edi]
        mov     edx, dword ptr [ecx]
        push    offset g_794cc8
        push    offset g_79fae8
        lea     eax, [edi + 0x4]
        push    eax
        call    dword ptr [edx + 0x8]
        call    FUN_006f5ee0
        nop
        jmp     L_3a
L_1b:
        call    FUN_006f5ed0
        mov     ecx, dword ptr [edi]
        mov     edx, dword ptr [ecx]
        push    offset g_771d60
        push    offset g_79fae8
        lea     eax, [edi + 0x4]
        push    eax
        call    dword ptr [edx + 0x8]
        call    FUN_006f5ee0
L_3a:
        mov     eax, dword ptr [esi + 0x2c]
        mov     ecx, dword ptr [eax + 0x6c]
        push    ecx
        call    dword ptr [g_76b210]
L_47:
        mov     eax, dword ptr [edi + 0x104]
        test    eax, eax
        jz      L_61
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 0x8]
        mov     dword ptr [edi + 0x104], 0
L_61:
        push    edi
        call    dword ptr [g_76b2d0]
        add     esp, 0x4
        jmp     L_6d
L_70:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
