/*
 * FUN_00675850 (461 B) — GameData field setter/validator dispatcher
 * (switch on field id 0xd..0x13). Calls a virtual setter (vtable+4) with a
 * default/parsed value, then validates the field and emits an _snprintf
 * error message if out of range.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned short g_007db0ac;
extern unsigned short g_007db0ae;
extern float g_0076c5b0;
extern void *g_0076b424;      /* IAT: _snprintf */
extern void FUN_00507b30(void);

__declspec(naked) void FUN_00675850(void)
{
    __asm {
        mov     ecx, dword ptr [esp+0x10]
        mov     eax, dword ptr [esp+0xc]
        push    ebx
        mov     bl, byte ptr [eax]
        push    ebp
        mov     ebp, dword ptr [esp+0x1c]
        push    esi
        mov     esi, dword ptr [esp+0x14]
        push    edi
        mov     edi, dword ptr [esp+0x14]
        push    ebp
        push    ecx
        push    eax
        push    esi
        test    bl, bl
        push    edi
        setnz   bl
        call    FUN_00507b30
        mov     cl, al
        mov     eax, dword ptr [esi+0x10]
        add     eax, -0xd
        add     esp, 0x14
        cmp     eax, 0x6
        ja      L_epilogue
        /* __emit: jmp dword ptr [eax*4+0x675a20] jump-table dispatch;
           MSVC6 re-bases the table via EBX instead of this FF 24 85 form */
__emit  0xFF
__emit  0x24
__emit  0x85
__emit  0x20
__emit  0x5A
__emit  0x67
__emit 0x00

L_case_d:
        test    bl, bl
        jnz     L_case_d_cont
        mov     edx, dword ptr [esi]
        lea     eax, [esp+0x1c]
        push    eax
        push    edi
        mov     ecx, esi
        mov     dword ptr [esp+0x24], 0x43fa0000
        call    dword ptr [edx+0x4]
        mov     cl, 0x1
L_case_d_cont:
        fld     dword ptr [edi+0x64]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      L_epilogue
        fld     dword ptr [edi+0x64]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x79745c
        jmp     L_snprintf

L_case_e:
        test    bl, bl
        jnz     L_epilogue
        mov     ax, word ptr [g_007db0ac]
        mov     cx, word ptr [g_007db0ae]
        mov     edx, dword ptr [esi]
        mov     word ptr [esp+0x20], ax
        lea     eax, [esp+0x20]
        push    eax
        mov     word ptr [esp+0x26], cx
        push    edi
        mov     ecx, esi
        call    dword ptr [edx+0x4]
        pop     edi
        pop     esi
        mov     cl, 0x1
        pop     ebp
        mov     al, cl
        pop     ebx
        ret

L_case_f:
        test    bl, bl
        jnz     L_epilogue
        mov     edx, dword ptr [esi]
        lea     eax, [esp+0x20]
        push    eax
        push    edi
        mov     ecx, esi
        mov     byte ptr [esp+0x28], bl
        call    dword ptr [edx+0x4]
        pop     edi
        pop     esi
        mov     cl, 0x1
        pop     ebp
        mov     al, cl
        pop     ebx
        ret

L_case_10:
        test    bl, bl
        jnz     L_epilogue
        mov     cx, word ptr [g_007db0ac]
        mov     dx, word ptr [g_007db0ae]
        mov     eax, dword ptr [esi]
        mov     word ptr [esp+0x20], cx
        lea     ecx, [esp+0x20]
        push    ecx
        push    edi
        mov     ecx, esi
        mov     word ptr [esp+0x2a], dx
        call    dword ptr [eax+0x4]
        pop     edi
        pop     esi
        mov     cl, 0x1
        pop     ebp
        mov     al, cl
        pop     ebx
        ret

L_case_11:
        test    bl, bl
        jnz     L_epilogue
        mov     ax, word ptr [g_007db0ae]
        mov     dx, word ptr [g_007db0ac]
        mov     word ptr [esp+0x22], ax
        lea     eax, [esp+0x20]
        push    eax
        mov     word ptr [esp+0x24], dx
        mov     edx, dword ptr [esi]
        push    edi
        mov     ecx, esi
        call    dword ptr [edx+0x4]
        pop     edi
        pop     esi
        mov     cl, 0x1
        pop     ebp
        mov     al, cl
        pop     ebx
        ret

L_case_12:
        test    bl, bl
        jnz     L_epilogue
        mov     cx, word ptr [g_007db0ac]
        mov     dx, word ptr [g_007db0ae]
        mov     eax, dword ptr [esi]
        mov     word ptr [esp+0x20], cx
        lea     ecx, [esp+0x20]
        push    ecx
        push    edi
        mov     ecx, esi
        mov     word ptr [esp+0x2a], dx
        call    dword ptr [eax+0x4]
        pop     edi
        pop     esi
        mov     cl, 0x1
        pop     ebp
        mov     al, cl
        pop     ebx
        ret

L_case_13:
        test    bl, bl
        jnz     L_case_13_cont
        mov     edx, dword ptr [esi]
        lea     eax, [esp+0x1c]
        push    eax
        push    edi
        mov     ecx, esi
        mov     dword ptr [esp+0x24], 0x0
        call    dword ptr [edx+0x4]
        mov     cl, 0x1
L_case_13_cont:
        fld     dword ptr [edi+0x74]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_epilogue
        fld     dword ptr [edi+0x74]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x7973f4

L_snprintf:
        mov     ecx, dword ptr [esp+0x2c]
        mov     edx, dword ptr [ecx]
        push    ebp
        push    edx
        call    dword ptr [g_0076b424]
        add     esp, 0x14
        xor     cl, cl

L_epilogue:
        pop     edi
        pop     esi
        pop     ebp
        mov     al, cl
        pop     ebx
        ret
    }
}
