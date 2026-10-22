/*
 * FUN_00677380 (509 B) — __cdecl, 5 stack params, returns byte in AL.
 *
 * Validates game-data values via a 4-way jump table (cases 0xb..0xe),
 * formatting error strings through _snprintf (IAT 0x0076b424) when a
 * value is out of range. FPU-heavy (flight-time math).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char __cdecl FUN_00674890(int a, int b, int c, int d, int e);
extern int *g_76b424;   /* IAT slot for _snprintf */

extern float g_76c5b0;
extern float g_7b220c;
extern float g_7b4384;

__declspec(naked) char __cdecl FUN_00677380(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0xc
        mov     eax, dword ptr [ebp + 0x10]
        mov     ecx, dword ptr [ebp + 0x14]
        push    ebx
        mov     bl, byte ptr [eax]
        push    esi
        mov     esi, dword ptr [ebp + 8]
        push    edi
        mov     edi, dword ptr [ebp + 0xc]
        test    bl, bl
        mov     ebx, dword ptr [ebp + 0x18]
        push    ebx
        push    ecx
        push    eax
        push    edi
        push    esi
        setnz   byte ptr [esp + 0x27]
        call    FUN_00674890
        mov     cl, al
        mov     eax, dword ptr [edi + 0x10]
        add     eax, -0xb
        add     esp, 0x14
        cmp     eax, 3
        ja      L7574
        __emit 0xFF   /* jmp dword ptr [eax*4+0x677580]: MSVC6 re-bases SIB dispatch via EBX */
        __emit 0x24
        __emit 0x85
        __emit 0x80
        __emit 0x75
        __emit 0x67
        __emit 0x00
L73c9:
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jnz     L73e8
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x41200000
        call    dword ptr [edx + 4]
        mov     cl, 1
L73e8:
        fld     dword ptr [esi + 0x34]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      L7574
        fld     dword ptr [esi + 0x34]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x797ba8
        jmp     L7562
L740f:
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jnz     L742e
        mov     eax, dword ptr [edi]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x40000000
        call    dword ptr [eax + 4]
        mov     cl, 1
L742e:
        fld     dword ptr [esi + 0x38]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      L7574
        fld     dword ptr [esi + 0x38]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [edx]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x797750
        push    ebx
        push    eax
        call    dword ptr [g_76b424]
        add     esp, 0x14
        xor     cl, cl
        mov     al, cl
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
L746b:
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jnz     L748a
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x41000000
        call    dword ptr [edx + 4]
        mov     cl, 1
L748a:
        fld     dword ptr [esi + 0x3c]
        fsub    dword ptr [esi + 0x38]
        fcom    dword ptr [g_7b220c]
        fnstsw  ax
        test    ah, 0x41
        jz      L74d1
        mov     ecx, dword ptr [ebp + 0x14]
        fstp    st(0)
        fld     dword ptr [esi + 0x38]
        mov     edx, dword ptr [ecx]
        sub     esp, 8
        fstp    qword ptr [esp]
        sub     esp, 8
        fld     dword ptr [esi + 0x3c]
        fstp    qword ptr [esp]
        push    0x797b78
        push    ebx
        push    edx
        call    dword ptr [g_76b424]
        add     esp, 0x1c
        xor     cl, cl
        mov     al, cl
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
L74d1:
        fld     dword ptr [g_7b4384]
        fmul    st(0), st(1)
        fmul    st(0), st(1)
        fld     dword ptr [esi + 0x3c]
        fadd    st(0), st(0)
        fsub    dword ptr [esi + 0x38]
        fdivp   st(1), st(0)
        fld     dword ptr [g_7b4384]
        fadd    dword ptr [g_7b220c]
        fcompp
        fnstsw  ax
        fstp    st(0)
        test    ah, 1
        jnz     L7574
        fld     dword ptr [esi + 0x3c]
        mov     eax, dword ptr [ebp + 0x14]
        mov     ecx, dword ptr [eax]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x797b40
        push    ebx
        push    ecx
        call    dword ptr [g_76b424]
        add     esp, 0x14
        xor     cl, cl
        mov     al, cl
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
L7525:
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jnz     L7544
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x41f00000
        call    dword ptr [edx + 4]
        mov     cl, 1
L7544:
        fld     dword ptr [esi + 0x40]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L7574
        fld     dword ptr [esi + 0x40]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x797b0c
L7562:
        mov     ecx, dword ptr [ebp + 0x14]
        mov     edx, dword ptr [ecx]
        push    ebx
        push    edx
        call    dword ptr [g_76b424]
        add     esp, 0x14
        xor     cl, cl
L7574:
        pop     edi
        pop     esi
        mov     al, cl
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
