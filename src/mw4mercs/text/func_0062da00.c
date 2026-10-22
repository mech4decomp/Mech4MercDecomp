/*
 * FUN_0062DA00 (634 B) — Cache/entry update routine.
 *
 * Reads a global key, computes an entry pointer (indexed by param_6),
 * initializes/refreshes a 16-byte record, and conditionally calls
 * FUN_0062d990 to rebuild the entry.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041eb40(void);
extern void __cdecl FUN_0070e390(void);
extern void __cdecl FUN_0070e3c0(void);
extern void __cdecl FUN_0070e460(void);
extern float __cdecl FUN_00707e70(int);
extern void __cdecl FUN_00414fd0(void);
extern void __cdecl FUN_0062d990(void);
extern int g_7dab44;
extern int g_7dab40;
extern float g_7899f8;

__declspec(naked) void FUN_0062da00(void)
{
    __asm {
        sub     esp, 0x74
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x88]
        push    edi
        push    0x10
        lea     eax, [esp + 0x18]
        xor     ebx, ebx
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], ebx
        mov     dword ptr [esp + 0x1c], ebx
        call    FUN_0041eb40
        push    0x10
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], ebx
        call    FUN_0041eb40
        mov     edx, dword ptr [g_7dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_7dab40]
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [eax + 0xc]
        xor     eax, 0x85739531
        mov     dl, byte ptr [eax + 0x16]
        xor     ecx, 0x85739531
        cmp     dl, bl
        jz      L_7b
        mov     ebp, dword ptr [esp + 0x9c]
        mov     ecx, dword ptr [ecx + 0x92c]
        lea     edx, [ebp + ebp*2]
        lea     eax, [ebp + edx*4]
        lea     esi, [ecx + eax*4 + 0x37d4]
        jmp     L_8b
L_7b:
        mov     esi, dword ptr [ecx + 0x930]
        mov     ebp, dword ptr [esp + 0x9c]
        add     esi, 0x18
L_8b:
        cmp     byte ptr [esi + 0x30], bl
        jz      L_db2d
        lea     edx, [esp + 0x2c]
        push    edx
        mov     byte ptr [esi + 0x30], bl
        call    FUN_0070e390
        xor     edi, edi
L_daa3:
        mov     eax, dword ptr [edi + 0x7f2ce0]
        mov     ecx, dword ptr [edi + 0x7b55f8]
        push    eax
        push    ecx
        lea     edx, [esp + 0x34]
        push    edx
        call    FUN_0070e3c0
        push    0x4
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0x34]
        push    ecx
        call    FUN_0070e3c0
        add     edi, 0x4
        cmp     edi, 0x3c
        jc      L_daa3
        lea     edx, [esp + 0x2c]
        push    edx
        lea     eax, [esp + 0x20]
        push    eax
        call    FUN_0070e460
        mov     edx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x20]
        lea     ecx, [esi + 0x18]
        mov     dword ptr [ecx], edx
        mov     edx, dword ptr [esp + 0x24]
        mov     dword ptr [ecx + 0x4], eax
        mov     eax, dword ptr [esp + 0x28]
        mov     dword ptr [ecx + 0x8], edx
        push    ebx
        mov     dword ptr [esi + 0x14], ebx
        mov     dword ptr [ecx + 0xc], eax
        call    FUN_00707e70
        fstp    dword ptr [esi + 0x2c]
        mov     edx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x20]
        lea     ecx, [esi + 0x4]
        mov     dword ptr [ecx], edx
        mov     edx, dword ptr [esp + 0x24]
        mov     dword ptr [ecx + 0x4], eax
        mov     eax, dword ptr [esp + 0x28]
        mov     dword ptr [ecx + 0x8], edx
        mov     dword ptr [esi], ebx
        mov     dword ptr [ecx + 0xc], eax
L_db2d:
        mov     edi, dword ptr [esi + 0x14]
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, edi
        jnz     L_dc27
        lea     ebp, [esi + 0x18]
        mov     dword ptr [esp + 0x18], ebx
        mov     eax, ebp
        mov     edx, 0x8
        mov     cx, bx
L_db4d:
        xor     cx, word ptr [eax]
        add     eax, 0x2
        dec     edx
        jnz     L_db4d
        cmp     word ptr [esp + 0x10], cx
        jz      L_db75
        mov     ecx, dword ptr [esp + 0x9c]
        push    ecx
        call    FUN_0062d990
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x74
        ret
L_db75:
        mov     eax, ebp
        mov     ecx, dword ptr [eax]
        lea     edx, [esi + 0x4]
        mov     dword ptr [edx], ecx
        mov     ecx, dword ptr [eax + 0x4]
        mov     dword ptr [edx + 0x4], ecx
        mov     ecx, dword ptr [eax + 0x8]
        mov     eax, dword ptr [eax + 0xc]
        mov     dword ptr [edx + 0x8], ecx
        lea     ecx, [esp + 0x2c]
        push    ecx
        mov     dword ptr [esi], edi
        mov     dword ptr [edx + 0xc], eax
        call    FUN_0070e390
        call    FUN_00414fd0
        mov     edx, eax
        sar     edx, 0x10
        and     eax, 0xffff
        xor     edx, eax
        mov     dword ptr [esp + 0x18], edx
        xor     edi, edi
L_dbb3:
        mov     eax, dword ptr [edi + 0x7f2ce0]
        mov     ecx, dword ptr [edi + 0x7b55f8]
        push    eax
        push    ecx
        lea     edx, [esp + 0x34]
        push    edx
        call    FUN_0070e3c0
        push    0x4
        lea     eax, [esp + 0x1c]
        push    eax
        lea     ecx, [esp + 0x34]
        push    ecx
        call    FUN_0070e3c0
        add     edi, 0x4
        cmp     edi, 0x3c
        jc      L_dbb3
        lea     edx, [esp + 0x2c]
        push    edx
        lea     eax, [esp + 0x20]
        push    eax
        call    FUN_0070e460
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x20]
        mov     dword ptr [ebp], edx
        mov     edx, dword ptr [esp + 0x28]
        mov     dword ptr [esi + 0x14], ecx
        mov     ecx, dword ptr [esp + 0x24]
        mov     dword ptr [ebp + 0x4], eax
        mov     dword ptr [ebp + 0x8], ecx
        push    ebx
        mov     dword ptr [ebp + 0xc], edx
        call    FUN_00707e70
        fstp    dword ptr [esi + 0x2c]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x74
        ret
L_dc27:
        cmp     eax, dword ptr [esi]
        jnz     L_dc69
        mov     dword ptr [esp + 0x18], ebx
        lea     eax, [esi + 0x4]
        mov     edx, 0x8
        mov     cx, bx
L_dc3a:
        xor     cx, word ptr [eax]
        add     eax, 0x2
        dec     edx
        jnz     L_dc3a
        cmp     word ptr [esp + 0x10], cx
        jnz     L_dc69
        push    ebx
        call    FUN_00707e70
        fsub    dword ptr [esi + 0x2c]
        fld     dword ptr [esp + 0x98]
        fadd    dword ptr [g_7899f8]
        fcompp
        __emit 0xDF   /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8; ref uses F6 C4 01 */
        __emit 0xC4
        __emit 0x01
        jz      L_dc72
L_dc69:
        push    ebp
        call    FUN_0062d990
        add     esp, 0x4
L_dc72:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x74
        ret
    }
}
