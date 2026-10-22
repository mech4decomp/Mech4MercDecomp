/*
 * FUN_00677E00 (499 B) — __cdecl, 5 stack params, returns byte in AL.
 *
 * Validates game-data values via a 4-way jump table (cases 0x16..0x19),
 * formatting error strings through _snprintf (IAT 0x0076b424) when a
 * value is out of range.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char __cdecl FUN_00679e70(int a, int b, int c, int d, int e);
extern int *g_76b424;   /* IAT slot for _snprintf */

extern unsigned short g_7db0ac;
extern unsigned short g_7db0ae;
extern int g_7b8d70;
extern int g_7b8d68;
extern int g_7b8d6c;
extern float g_76c5b0;

__declspec(naked) char __cdecl FUN_00677e00(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0x14
        mov     ecx, dword ptr [ebp + 0x18]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [ebp + 0x10]
        push    ebx
        mov     bl, byte ptr [eax]
        push    esi
        mov     esi, dword ptr [ebp + 8]
        push    edi
        mov     edi, dword ptr [ebp + 0xc]
        push    ecx
        push    edx
        push    eax
        push    edi
        test    bl, bl
        push    esi
        setnz   bl
        call    FUN_00679e70
        mov     cl, al
        mov     eax, dword ptr [edi + 0x10]
        add     eax, -0x16
        add     esp, 0x14
        cmp     eax, 3
        ja      L67fea
        __emit 0xFF   /* jmp dword ptr [eax*4+0x677ff4]: MSVC6 re-bases SIB dispatch via EBX */
        __emit 0x24
        __emit 0x85
        __emit 0xF4
        __emit 0x7F
        __emit 0x67
        __emit 0x00
L67e47:
        test    bl, bl
        jnz     L67fea
        mov     ax, word ptr [g_7db0ac]
        mov     cx, word ptr [g_7db0ae]
        mov     edx, dword ptr [edi]
        mov     word ptr [esp + 0x10], ax
        lea     eax, [esp + 0x10]
        push    eax
        mov     word ptr [esp + 0x16], cx
        push    esi
        mov     ecx, edi
        call    dword ptr [edx + 4]
        mov     cl, 1
        mov     al, cl
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
L67e7e:
        test    bl, bl
        jnz     L67eae
        mov     eax, dword ptr [g_7b8d70]
        mov     ecx, dword ptr [g_7b8d68]
        mov     edx, dword ptr [g_7b8d6c]
        mov     dword ptr [esp + 0x1c], eax
        lea     eax, [esp + 0x14]
        push    eax
        mov     dword ptr [esp + 0x18], ecx
        mov     dword ptr [esp + 0x1c], edx
        mov     edx, dword ptr [edi]
        push    esi
        mov     ecx, edi
        call    dword ptr [edx + 4]
        mov     cl, 1
L67eae:
        fld     dword ptr [esi + 0x84]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L67fea
        fld     dword ptr [esi + 0x8c]
        sub     esp, 8
        fstp    qword ptr [esp]
        sub     esp, 8
        fld     dword ptr [esi + 0x88]
        sub     esp, 8
        fstp    qword ptr [esp + 8]
        fld     dword ptr [esi + 0x84]
        fstp    qword ptr [esp]
        push    0x7977c0
        jmp     L67f78
L67ef4:
        test    bl, bl
        jnz     L67f24
        mov     eax, dword ptr [g_7b8d70]
        mov     ecx, dword ptr [g_7b8d68]
        mov     edx, dword ptr [g_7b8d6c]
        mov     dword ptr [esp + 0x1c], eax
        lea     eax, [esp + 0x14]
        push    eax
        mov     dword ptr [esp + 0x18], ecx
        mov     dword ptr [esp + 0x1c], edx
        mov     edx, dword ptr [edi]
        push    esi
        mov     ecx, edi
        call    dword ptr [edx + 4]
        mov     cl, 1
L67f24:
        fld     dword ptr [esi + 0x90]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jnz     L67f4e
        fld     dword ptr [esi + 0x98]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L67fea
L67f4e:
        fld     dword ptr [esi + 0x98]
        sub     esp, 8
        fstp    qword ptr [esp]
        sub     esp, 8
        fld     dword ptr [esi + 0x94]
        sub     esp, 8
        fstp    qword ptr [esp + 8]
        fld     dword ptr [esi + 0x90]
        fstp    qword ptr [esp]
        push    0x79777c
L67f78:
        mov     ecx, dword ptr [ebp + 0x18]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [edx]
        push    ecx
        push    eax
        call    dword ptr [g_76b424]
        add     esp, 0x24
        xor     cl, cl
        mov     al, cl
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
L67f96:
        test    bl, bl
        jnz     L67fb1
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x10]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x18], 0x0
        call    dword ptr [edx + 4]
        mov     cl, 1
L67fb1:
        fld     dword ptr [esi + 0x9c]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L67fea
        fld     dword ptr [esi + 0x9c]
        mov     ecx, dword ptr [ebp + 0x18]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [edx]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x79748c
        push    ecx
        push    eax
        call    dword ptr [g_76b424]
        add     esp, 0x14
        xor     cl, cl
L67fea:
        pop     edi
        pop     esi
        mov     al, cl
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
