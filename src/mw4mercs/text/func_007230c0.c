/*
 * FUN_007230C0 (151 B) — RET 0x4 (1 stack param).
 *
 * Walks a linked list (head at 0x00896CC0, next at +0x8, id at +0xC) and
 * calls FUN_0072F600 (thiscall) for each node whose id matches the target.
 * If param == -1, iterates over all slots in the 0x00857F48 table; otherwise
 * only the single slot indexed by param.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

/* .data globals */
extern char g_858138;
extern int  g_896cc0;

extern void FUN_0072f600(void);

__declspec(naked) void func_007230c0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        cmp     edi, -1
        jnz     L_3120
        mov     al, byte ptr [g_858138]
        xor     edi, edi
        test    al, al
        jbe     L_3152
        push    ebx
        mov     ebx, 0x857f48
L_30dc:
        cmp     dword ptr [ebx], 0x0
        jz      L_3108
        mov     al, byte ptr [edi + 0x857f88]
        test    al, al
        jnz     L_3108
        mov     esi, dword ptr [g_896cc0]
        test    esi, esi
        jz      L_3108
L_30f5:
        cmp     edi, dword ptr [esi + 0xc]
        jnz     L_3101
        mov     ecx, esi
        call    FUN_0072f600
L_3101:
        mov     esi, dword ptr [esi + 0x8]
        test    esi, esi
        jnz     L_30f5
L_3108:
        mov     eax, dword ptr [g_858138]
        inc     edi
        and     eax, 0xff
        add     ebx, 0x4
        cmp     edi, eax
        jc      L_30dc
        pop     ebx
        pop     edi
        pop     esi
        ret     0x4
L_3120:
        mov     eax, dword ptr [edi*4 + 0x857f48]
        test    eax, eax
        jz      L_3152
        mov     al, byte ptr [edi + 0x857f88]
        test    al, al
        jnz     L_3152
        mov     esi, dword ptr [g_896cc0]
        test    esi, esi
        jz      L_3152
L_313f:
        cmp     edi, dword ptr [esi + 0xc]
        jnz     L_314b
        mov     ecx, esi
        call    FUN_0072f600
L_314b:
        mov     esi, dword ptr [esi + 0x8]
        test    esi, esi
        jnz     L_313f
L_3152:
        pop     edi
        pop     esi
        ret     0x4
    }
}
