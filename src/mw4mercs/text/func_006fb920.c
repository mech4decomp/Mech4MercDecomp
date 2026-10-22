/*
 * FUN_006fb920 (389 B) — __stdcall, RET 4 (one stack param: LPCSTR path).
 *
 * File-find wrapper. Calls FindFirstFileA (IAT 0x0076b1a4) into the
 * WIN32_FIND_DATA buffer at 0x00856450, stores the handle at 0x0085671c,
 * then loops calling FindNextFileA (IAT 0x0076b19c) via the function
 * pointer at 0x0076b1ac, comparing filename bytes against the string
 * constants at 0x0079278c / 0x007a02ac. Returns &DAT_0085647c on success.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_0085671c;
extern int g_00856450;
extern void *g_0076b1a4;
extern void *g_0076b19c;
extern void *g_0076b1ac;

__declspec(naked) void *__stdcall FUN_006fb920(void *param)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    0x856450
        push    eax
        call    dword ptr [g_0076b1a4]
        mov     edi, eax
        cmp     edi, -0x1
        mov     dword ptr [g_0085671c], edi
        jnz     L_b954
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [g_0085671c], 0x0
        xor     eax, eax
        pop     ebx
        ret     4
L_b954:
        mov     esi, 0x79278c
        mov     ecx, 0x85647c
        xor     ebx, ebx
L_b960:
        mov     al, byte ptr [ecx]
        mov     dl, al
        cmp     al, byte ptr [esi]
        jnz     L_b984
        cmp     dl, bl
        jz      L_b980
        mov     al, byte ptr [ecx + 0x1]
        mov     dl, al
        cmp     al, byte ptr [esi + 0x1]
        jnz     L_b984
        add     ecx, 0x2
        add     esi, 0x2
        cmp     dl, bl
        jnz     L_b960
L_b980:
        xor     ecx, ecx
        jmp     L_b989
L_b984:
        sbb     ecx, ecx
        sbb     ecx, -0x1
L_b989:
        cmp     ecx, ebx
        jz      L_b9c4
        mov     esi, 0x7a02ac
        mov     ecx, 0x85647c
L_b997:
        mov     al, byte ptr [ecx]
        mov     dl, al
        cmp     al, byte ptr [esi]
        jnz     L_b9bb
        cmp     dl, bl
        jz      L_b9b7
        mov     al, byte ptr [ecx + 0x1]
        mov     dl, al
        cmp     al, byte ptr [esi + 0x1]
        jnz     L_b9bb
        add     ecx, 0x2
        add     esi, 0x2
        cmp     dl, bl
        jnz     L_b997
L_b9b7:
        xor     ecx, ecx
        jmp     L_b9c0
L_b9bb:
        sbb     ecx, ecx
        sbb     ecx, -0x1
L_b9c0:
        cmp     ecx, ebx
        jnz     L_b9ca
L_b9c4:
        mov     dword ptr [g_00856450], ebx
L_b9ca:
        mov     ecx, dword ptr [g_00856450]
        and     ecx, 0x10
        test    cl, cl
        jnz     L_ba7d
        mov     ebp, dword ptr [g_0076b1ac]
        jmp     L_b9e9
L_b9e3:
        mov     edi, dword ptr [g_0085671c]
L_b9e9:
        push    0x856450
        push    edi
        call    ebp
        test    eax, eax
        jz      L_ba89
        mov     esi, 0x79278c
        mov     eax, 0x85647c
L_ba03:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     L_ba27
        cmp     cl, bl
        jz      L_ba23
        mov     dl, byte ptr [eax + 0x1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 0x1]
        jnz     L_ba27
        add     eax, 0x2
        add     esi, 0x2
        cmp     cl, bl
        jnz     L_ba03
L_ba23:
        xor     eax, eax
        jmp     L_ba2c
L_ba27:
        sbb     eax, eax
        sbb     eax, -0x1
L_ba2c:
        cmp     eax, ebx
        jz      L_ba67
        mov     esi, 0x7a02ac
        mov     eax, 0x85647c
L_ba3a:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     L_ba5e
        cmp     cl, bl
        jz      L_ba5a
        mov     dl, byte ptr [eax + 0x1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 0x1]
        jnz     L_ba5e
        add     eax, 0x2
        add     esi, 0x2
        cmp     cl, bl
        jnz     L_ba3a
L_ba5a:
        xor     eax, eax
        jmp     L_ba63
L_ba5e:
        sbb     eax, eax
        sbb     eax, -0x1
L_ba63:
        cmp     eax, ebx
        jnz     L_ba6d
L_ba67:
        mov     dword ptr [g_00856450], ebx
L_ba6d:
        mov     eax, dword ptr [g_00856450]
        and     eax, 0x10
        test    al, al
        jz      L_b9e3
L_ba7d:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x85647c
        pop     ebx
        ret     4
L_ba89:
        mov     ecx, dword ptr [g_0085671c]
        push    ecx
        call    dword ptr [g_0076b19c]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [g_0085671c], ebx
        xor     eax, eax
        pop     ebx
        ret     4
    }
}
