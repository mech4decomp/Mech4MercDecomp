/*
 * FUN_006286F0 (881 B) — __fastcall (ECX = param_1), RET 0.
 *
 * Updates a HUD/mech display object: armor/heat/range readouts, weapon
 * status, and per-frame update of a list of sub-objects. Heavy FPU use.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_00560420(void);
extern void __cdecl FUN_0050e230(void);
extern void __cdecl FUN_0063dfb0(void);
extern void __cdecl FUN_0063dfd0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0040ca10(void);
extern void __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_005e1430(void);
extern void __cdecl FUN_00628e90(void);
extern void __cdecl FUN_006286a0(void);
extern void __cdecl FUN_00628eb0(void);
extern void __cdecl FUN_00628e70(void);
extern void __cdecl FUN_006100a0(void);
extern void __cdecl FUN_00707e70(void);

extern void *g_76b420;          /* sprintf function pointer @ 0x76b420 */
extern float g_76d048;          /* float constant @ 0x76d048 */
extern float g_76c5b0;          /* float constant 0.0 @ 0x76c5b0 */
extern float g_76d04c;          /* float constant @ 0x76d04c */
extern void *g_7dab44;          /* global object pointer @ 0x7dab44 */
extern void *g_7dab40;          /* xor key @ 0x7dab40 */

extern const char g_str_78d068; /* "%5.0fK" @ 0x78d068 */
extern const char g_str_78d060; /* format string @ 0x78d060 */

__declspec(naked) void __cdecl FUN_006286f0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0x60
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x14c]
        test    eax, eax
        push    edi
        jz      L_2871c
        push    0x0
        push    0x0
        lea     ecx, [esi + 0x170]
        push    ecx
        mov     ecx, dword ptr [eax + 0x70]
        call    FUN_00560420
    L_2871c:
        mov     eax, dword ptr [esi + 0x8c]
        test    eax, eax
        mov     ebx, dword ptr [g_76b420]
        mov     ebp, 0xff
        jz      L_28778
        mov     edi, dword ptr [esi + 0x118]
        mov     eax, dword ptr [eax]
        cmp     eax, dword ptr [edi + 0x6c]
        mov     dword ptr [esp + 0x10], eax
        jz      L_28778
        fild    dword ptr [esp + 0x10]
        sub     esp, 0x8
        lea     edx, [esp + 0x34]
        mov     dword ptr [edi + 0x6c], eax
        fmul    dword ptr [g_76d048]
        mov     dword ptr [edi + 0x50], ebp
        fstp    qword ptr [esp]
        push    offset g_str_78d068
        push    edx
        call    ebx
        mov     ecx, dword ptr [edi + 0x74]
        add     esp, 0x10
        push    0x0
        push    0x0
        lea     eax, [esp + 0x34]
        push    eax
        call    FUN_00560420
    L_28778:
        mov     eax, dword ptr [esi + 0x90]
        test    eax, eax
        jz      L_28795
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [esi + 0x11c]
        cmp     ecx, dword ptr [eax + 0x60]
        jz      L_28795
        mov     dword ptr [eax + 0x60], ecx
        mov     dword ptr [eax + 0x50], ebp
    L_28795:
        mov     eax, dword ptr [esi + 0x94]
        test    eax, eax
        jz      L_287f7
        mov     edx, dword ptr [eax]
        mov     ecx, dword ptr [esi + 0x98]
        push    edx
        mov     dword ptr [esp + 0x14], ecx
        call    FUN_0050e230
        fcom    dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esi + 0x120]
        mov     dword ptr [ecx + 0x60], eax
        fnstsw  ax
        add     esp, 0x4
        test    ah, 0x41
        jnz     L_287d2
        fstp    st(0)
        fld     dword ptr [esp + 0x10]
    L_287d2:
        fld     dword ptr [esp + 0x10]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x40
        jnz     L_287ec
        fdiv    dword ptr [esp + 0x10]
        fstp    dword ptr [ecx + 0x5c]
        jmp     L_2880b
    L_287ec:
        fstp    st(0)
        mov     dword ptr [ecx + 0x5c], 0xbf800000
        jmp     L_2880b
    L_287f7:
        mov     eax, dword ptr [esi + 0x120]
        mov     dword ptr [eax + 0x60], 0x0
        mov     dword ptr [eax + 0x5c], 0xbf800000
    L_2880b:
        mov     eax, dword ptr [esi + 0x84]
        test    eax, eax
        jz      L_28821
        mov     ecx, dword ptr [esi + 0x128]
        push    eax
        call    FUN_0063dfb0
    L_28821:
        mov     eax, dword ptr [esi + 0x88]
        test    eax, eax
        jz      L_28839
        mov     ecx, dword ptr [esi + 0x128]
        push    0x0
        push    eax
        call    FUN_0063dfd0
    L_28839:
        lea     edi, [esi + 0x5c]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jz      L_288ec
        mov     eax, dword ptr [esi + 0x164]
        test    eax, eax
        jz      L_288ec
        mov     ecx, dword ptr [eax + 0xd8]
        add     ecx, 0x80
        push    ecx
        lea     ecx, [esp + 0x30]
        call    FUN_00419480
        mov     ecx, edi
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_00419480
        lea     edx, [esp + 0x20]
        push    edx
        lea     eax, [esp + 0x30]
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_0040ca10
        fld     dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x18]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [esp + 0x10]
        faddp   st(1), st(0)
        fsqrt
        fstp    st(2)
        fstp    st(0)
        call    FUN_0075db4a
        push    eax
        lea     ecx, [esp + 0x40]
        push    offset g_str_78d060
        push    ecx
        call    ebx
        mov     eax, dword ptr [esi + 0x12c]
        mov     ecx, dword ptr [eax + 0x6c]
        add     esp, 0xc
        push    0x0
        push    0x0
        lea     edx, [esp + 0x44]
        push    edx
        call    FUN_00560420
    L_288ec:
        mov     edi, dword ptr [esi + 0x164]
        test    edi, edi
        jz      L_28981
        mov     al, byte ptr [esi + 0xa0]
        test    al, al
        jz      L_2893f
        mov     ebp, dword ptr [esi + 0xa4]
        test    ebp, ebp
        jz      L_2893f
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [edx + 0x60]
        test    eax, eax
        jz      L_2893f
        cmp     eax, ebp
        jz      L_2893f
        mov     ecx, dword ptr [esi + 0x134]
        fld     dword ptr [ecx + 0x88]
        fcomp   dword ptr [g_76d04c]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_2893f
        mov     dword ptr [ecx + 0x68], 0x0
        jmp     L_28990
    L_2893f:
        mov     ebp, dword ptr [esi + 0xa4]
        test    ebp, ebp
        jnz     L_28956
        mov     edx, dword ptr [esi + 0x134]
        xor     eax, eax
        mov     dword ptr [edx + 0x68], eax
        jmp     L_28990
    L_28956:
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax + 0x60]
        test    eax, eax
        jnz     L_2896c
        mov     edx, dword ptr [esi + 0x134]
        mov     dword ptr [edx + 0x68], eax
        jmp     L_28990
    L_2896c:
        mov     edx, dword ptr [esi + 0x134]
        xor     ecx, ecx
        cmp     eax, ebp
        setnz   cl
        inc     ecx
        mov     eax, ecx
        mov     dword ptr [edx + 0x68], eax
        jmp     L_28990
    L_28981:
        mov     eax, dword ptr [esi + 0x134]
        mov     ecx, dword ptr [esi + 0xa4]
        mov     dword ptr [eax + 0x68], ecx
    L_28990:
        mov     edx, dword ptr [g_7dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_7dab40]
        mov     ecx, dword ptr [eax + 0xc]
        xor     ecx, 0x85739531
        mov     al, byte ptr [ecx + 0x17]
        test    al, al
        jz      L_28a26
        test    edi, edi
        jz      L_289d5
        push    edi
        call    FUN_005e1430
        add     esp, 0x4
        mov     ecx, esi
        push    eax
        call    FUN_00628e90
        mov     edx, dword ptr [esi + 0x164]
        push    edx
        call    FUN_006286a0
        add     esp, 0x4
        push    eax
        jmp     L_289d7
    L_289d5:
        push    0x0
    L_289d7:
        mov     ecx, esi
        call    FUN_00628eb0
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     edi, dword ptr [ecx + 0x20]
        xor     edi, 0x85739531
        jz      L_28a26
        mov     al, byte ptr [edi + 0x21e4]
        test    al, al
        jnz     L_28a08
        fld     dword ptr [g_76c5b0]
        jmp     L_28a19
    L_28a08:
        lea     ecx, [edi + 0x21b8]
        call    FUN_006100a0
        fsubr   dword ptr [edi + 0x2218]
    L_28a19:
        sub     esp, 0x8
        mov     ecx, esi
        fstp    qword ptr [esp]
        call    FUN_00628e70
    L_28a26:
        push    0x0
        call    FUN_00707e70
        fstp    qword ptr [esp + 0x10]
        mov     edi, dword ptr [esi + 0xf8]
        mov     esi, dword ptr [esi + 0xfc]
        cmp     edi, esi
        jz      L_28a59
        mov     ebx, dword ptr [esp + 0x14]
        mov     ebp, dword ptr [esp + 0x10]
    L_28a49:
        mov     ecx, dword ptr [edi]
        mov     edx, dword ptr [ecx]
        push    ebx
        push    ebp
        call    dword ptr [edx + 0x8]
        add     edi, 0x4
        cmp     edi, esi
        jnz     L_28a49
    L_28a59:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
