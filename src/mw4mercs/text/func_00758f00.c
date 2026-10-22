/*
 * FUN_00758F00 (139 B) — __thiscall (ECX=this), RET 8 (two float params).
 *
 * FPU bounds check: compares (this+8 + param1) and
 * (*(this+0x1c)+8 + this+4 + param2) against globals, plus param1/param2
 * against _DAT_0076c5b0. Returns 1 if any bound exceeded, else 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_858940;          /* DAT_00858940 */
extern int g_858944;          /* DAT_00858944 */
extern float g_76c5b0;        /* _DAT_0076c5b0 */

__declspec(naked) char __stdcall FUN_00758f00(float param1, float param2)
{
    __asm {
        mov     edx, dword ptr [ecx + 0x1c]
        sub     esp, 0x8
        test    edx, edx
        jz      L_83
        mov     eax, dword ptr [ecx + 0x8]
        __emit 0x89  /* __emit: mov [esp+0],eax - MSVC6 drops the 00 disp byte (89 04 24) */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        mov     dword ptr [esp + 0x4], 0x0
        __emit 0xDF  /* __emit: fild qword ptr [esp+0] - MSVC6 drops the 00 disp byte (DF 2C 24) */
        __emit 0x6C
        __emit 0x24
        __emit 0x00
        fadd    dword ptr [esp + 0xc]
        fild    dword ptr [g_858940]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jnz     L_7b
        fild    dword ptr [edx + 0x8]
        mov     ecx, dword ptr [ecx + 0x4]
        __emit 0x89  /* __emit: mov [esp+0],ecx - MSVC6 drops the 00 disp byte (89 0C 24) */
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        mov     dword ptr [esp + 0x4], 0x0
        __emit 0xDA  /* __emit: fiadd dword ptr [esp+0] - MSVC6 drops the 00 disp byte (DA 04 24) */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        fadd    dword ptr [esp + 0x10]
        fild    dword ptr [g_858944]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jnz     L_7b
        fld     dword ptr [esp + 0xc]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_7b
        fld     dword ptr [esp + 0x10]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_83
L_7b:
        mov     al, 0x1
        add     esp, 0x8
        ret     0x8
L_83:
        xor     al, al
        add     esp, 0x8
        ret     0x8
    }
}
