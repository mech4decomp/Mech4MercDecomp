/*
 * FUN_00604270 (1291 B) — __thiscall (RET 0x8, 2 params) weapon-render
 * "update/draw" routine. Heavy FPU interpolation logic, virtual calls
 * through the sub-objects at +0x40/+0x48/+0x50, and writes to the +0x80/
 * +0x84/+0x88 float fields. Calls FUN_00604f30 (interp) and the
 * FUN_00605700/FUN_00605760 helpers on the +0x3c object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006055f0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_00605700(void);
extern void __cdecl FUN_00604f30(void);
extern void __cdecl FUN_00605760(void);

extern float g_0076d064;   /* DAT_0076d064 */
extern float g_0076c5b0;   /* DAT_0076c5b0 */

__declspec(naked) void FUN_00604270(void)
{
    __asm {
        sub     esp, 0x10
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x3c]
        push    0x3f800000
        call    FUN_006055f0
        mov     al, byte ptr [esi + 0x1d]
        mov     ebp, dword ptr [esp + 0x28]
        xor     edi, edi
        test    al, al
        mov     dword ptr [esp + 0x14], edi
        mov     dword ptr [esp + 0x1c], edi
        mov     dword ptr [esp + 0x18], edi
        mov     dword ptr [esi + 0x88], edi
        mov     dword ptr [esi + 0x84], edi
        mov     dword ptr [esi + 0x80], edi
        mov     byte ptr [esp + 0x13], 0x1
        mov     byte ptr [esp + 0x12], 0x1
        jz      loc_604320
        lea     ecx, [esi + 0x50]
        call    FUN_0041fd80
        test    eax, eax
        jnz     loc_604320
        lea     edi, [esi + 0x40]
        mov     ecx, edi
        mov     byte ptr [esi + 0x1d], al
        mov     byte ptr [esi + 0x1e], 0x1
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0x2c]
        mov     ecx, edi
        mov     dword ptr [esp + 0x28], eax
        call    FUN_0041fcb0
        lea     ecx, [esi + 0x48]
        call    FUN_0041fd80
        lea     ecx, [esi + 0x48]
        mov     ebx, eax
        call    FUN_0041fcb0
        mov     eax, dword ptr [esp + 0x28]
        mov     edx, dword ptr [ebx]
        push    ebp
        push    0xbf800000
        push    eax
        mov     ecx, ebx
        call    dword ptr [edx + 0x18]
        push    ebx
        mov     ecx, edi
        call    FUN_0041fcd0
        mov     ecx, dword ptr [esi + 0x14]
        mov     edx, dword ptr [esi + 0x28]
        mov     dword ptr [esi + 0x10], ecx
        mov     dword ptr [esi + 0x14], edx
        xor     edi, edi
loc_604320:
        mov     al, byte ptr [esi + 0x20]
        test    al, al
        jz      loc_604424
        mov     ecx, dword ptr [esi + 0x3c]
        push    0x3f800000
        call    FUN_006055f0
        lea     ebx, [esi + 0x50]
        mov     ecx, ebx
        mov     dword ptr [esp + 0x14], eax
        call    FUN_0041fd80
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [eax]
        push    ebp
        push    edi
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x1c]
        mov     ecx, dword ptr [esi + 0x3c]
        call    FUN_00605700
        mov     ecx, ebx
        mov     dword ptr [esi + 0x88], 0x3f800000
        call    FUN_0041fd80
        mov     edi, eax
        fld     dword ptr [edi + 0x2c]
        fcomp   dword ptr [edi + 0x34]
        __emit 0xDF   /* fnstsw ax (no WAIT prefix) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (MSVC6 rejects test ah,imm) */
        __emit 0xC4
        __emit 0x01
        jnz     loc_604387
        mov     al, byte ptr [esi + 0x1e]
        test    al, al
        jz      loc_604387
        mov     byte ptr [esi + 0x1e], 0x0
loc_604387:
        fld     dword ptr [edi + 0x2c]
        fcomp   dword ptr [edi + 0x38]
        __emit 0xDF   /* fnstsw ax (no WAIT prefix) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 */
        __emit 0xC4
        __emit 0x01
        jnz     loc_6043bf
        mov     al, byte ptr [esi + 0x1f]
        test    al, al
        jnz     loc_6043bf
        lea     ecx, [esi + 0x48]
        mov     byte ptr [esi + 0x1f], 0x1
        mov     byte ptr [esp + 0x13], 0x0
        call    FUN_0041fd80
        fld     dword ptr [edi + 0x2c]
        mov     ecx, dword ptr [edi + 0x3c]
        mov     edx, dword ptr [eax]
        push    ebp
        push    ecx
        push    ecx
        fstp    dword ptr [esp]
        mov     ecx, eax
        call    dword ptr [edx + 0x18]
loc_6043bf:
        fld     dword ptr [edi + 0x2c]
        fcomp   dword ptr [g_0076d064]
        __emit 0xDF   /* fnstsw ax (no WAIT prefix) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 */
        __emit 0xC4
        __emit 0x01
        jnz     loc_604422
        mov     ecx, ebx
        mov     byte ptr [esi + 0x1d], 0x0
        mov     byte ptr [esi + 0x1e], 0x1
        mov     byte ptr [esi + 0x20], 0x0
        mov     byte ptr [esi + 0x1f], 0x0
        mov     byte ptr [esp + 0x12], 0x0
        call    FUN_0041fcb0
        lea     edi, [esi + 0x40]
        mov     ecx, edi
        call    FUN_0041fcb0
        lea     ebx, [esi + 0x48]
        mov     ecx, ebx
        call    FUN_0041fd80
        mov     ecx, ebx
        mov     dword ptr [esp + 0x28], eax
        call    FUN_0041fcb0
        mov     edx, dword ptr [esp + 0x28]
        push    edx
        mov     ecx, edi
        call    FUN_0041fcd0
        mov     eax, dword ptr [esi + 0x14]
        mov     ecx, dword ptr [esi + 0x28]
        mov     dword ptr [esi + 0x10], eax
        mov     dword ptr [esi + 0x14], ecx
loc_604422:
        xor     edi, edi
loc_604424:
        mov     al, byte ptr [esi + 0x1e]
        test    al, al
        jz      loc_6045a4
        mov     ecx, dword ptr [esi + 0x3c]
        push    0x3f800000
        call    FUN_006055f0
        lea     ebx, [esi + 0x40]
        mov     ecx, ebx
        mov     dword ptr [esp + 0x18], eax
        call    FUN_0041fd80
        fld     dword ptr [eax + 0x2c]
        mov     al, byte ptr [esp + 0x12]
        test    al, al
        fstp    dword ptr [esi + 0x24]
        mov     ecx, ebx
        jz      loc_604470
        call    FUN_0041fd80
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [eax]
        push    ebp
        push    0x0
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x1c]
        jmp     loc_604481
loc_604470:
        call    FUN_0041fd80
        mov     edx, dword ptr [eax]
        push    ebp
        push    0x0
        push    0x0
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
loc_604481:
        mov     ecx, dword ptr [esi + 0x3c]
        call    FUN_00605700
        mov     al, byte ptr [esi + 0x1d]
        test    al, al
        mov     dword ptr [esi + 0x80], 0x3f800000
        jz      loc_6045a2
        mov     al, byte ptr [esi + 0x20]
        test    al, al
        jnz     loc_6045a2
        lea     ecx, [esi + 0x50]
        call    FUN_0041fd80
        mov     edi, eax
        cmp     dword ptr [edi + 0x30], 0xbf800000
        mov     ecx, ebx
        jnz     loc_6044e0
        call    FUN_0041fd80
        fld     dword ptr [eax + 0x2c]
        mov     edx, dword ptr [edi]
        push    ebp
        push    0xbf800000
        push    ecx
        fstp    dword ptr [esp]
        mov     ecx, edi
        mov     byte ptr [esi + 0x20], 0x1
        call    dword ptr [edx + 0x18]
        jmp     loc_604564
loc_6044e0:
        call    FUN_0041fd80
        mov     ecx, eax
        cmp     dword ptr [esi + 0x24], 0xbf800000
        jz      loc_604564
        fld     dword ptr [esi + 0x24]
        fcomp   dword ptr [edi + 0x30]
        __emit 0xDF   /* fnstsw ax (no WAIT prefix) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 */
        __emit 0xC4
        __emit 0x41
        jz      loc_60450a
        fld     dword ptr [ecx + 0x2c]
        fcomp   dword ptr [edi + 0x30]
        __emit 0xDF   /* fnstsw ax (no WAIT prefix) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 */
        __emit 0xC4
        __emit 0x01
        jz      loc_60454c
loc_60450a:
        fld     dword ptr [esi + 0x24]
        fcomp   dword ptr [edi + 0x30]
        __emit 0xDF   /* fnstsw ax (no WAIT prefix) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 */
        __emit 0xC4
        __emit 0x41
        jz      loc_604538
        mov     al, byte ptr [ecx + 0x28]
        test    al, al
        jz      loc_604538
        fld     dword ptr [ecx + 0x2c]
        mov     edx, dword ptr [edi]
        push    ebp
        push    0xbf800000
        push    ecx
        fstp    dword ptr [esp]
        mov     ecx, edi
        mov     byte ptr [esi + 0x20], 0x1
        call    dword ptr [edx + 0x18]
        jmp     loc_604564
loc_604538:
        fld     dword ptr [ecx + 0x2c]
        fcomp   dword ptr [edi + 0x30]
        __emit 0xDF   /* fnstsw ax (no WAIT prefix) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 */
        __emit 0xC4
        __emit 0x01
        jnz     loc_604564
        mov     al, byte ptr [ecx + 0x28]
        test    al, al
        jz      loc_604564
loc_60454c:
        fld     dword ptr [ecx + 0x2c]
        mov     eax, dword ptr [edi]
        push    ebp
        push    0xbf800000
        push    ecx
        fstp    dword ptr [esp]
        mov     ecx, edi
        mov     byte ptr [esi + 0x20], 0x1
        call    dword ptr [eax + 0x18]
loc_604564:
        mov     al, byte ptr [esi + 0x20]
        test    al, al
        jz      loc_6045a2
        mov     ecx, dword ptr [esi + 0x3c]
        push    0x3f800000
        call    FUN_006055f0
        lea     ecx, [esi + 0x50]
        mov     dword ptr [esp + 0x14], eax
        call    FUN_0041fd80
        mov     edx, dword ptr [eax]
        push    ebp
        push    0x0
        push    0x0
        mov     ecx, eax
        call    dword ptr [edx + 0x1c]
        mov     ecx, dword ptr [esi + 0x3c]
        call    FUN_00605700
        mov     dword ptr [esi + 0x88], 0x3f800000
loc_6045a2:
        xor     edi, edi
loc_6045a4:
        mov     al, byte ptr [esi + 0x1f]
        test    al, al
        jz      loc_6045fd
        mov     ecx, dword ptr [esi + 0x3c]
        push    0x3f800000
        call    FUN_006055f0
        mov     dword ptr [esp + 0x1c], eax
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        lea     ecx, [esi + 0x48]
        jz      loc_6045dc
        call    FUN_0041fd80
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [eax]
        push    ebp
        push    edi
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x1c]
        jmp     loc_6045eb
loc_6045dc:
        call    FUN_0041fd80
        mov     edx, dword ptr [eax]
        push    ebp
        push    edi
        push    edi
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
loc_6045eb:
        mov     ecx, dword ptr [esi + 0x3c]
        call    FUN_00605700
        mov     dword ptr [esi + 0x84], 0x3f800000
loc_6045fd:
        mov     ecx, dword ptr [esi + 0x3c]
        call    FUN_00605700
        mov     al, byte ptr [esi + 0x20]
        test    al, al
        jz      loc_60475d
        lea     ecx, [esi + 0x50]
        call    FUN_0041fd80
        mov     ecx, eax
        mov     al, byte ptr [esi + 0x1e]
        test    al, al
        jz      loc_6046bc
        fld     dword ptr [ecx + 0x34]
        fcomp   dword ptr [g_0076c5b0]
        __emit 0xDF   /* fnstsw ax (no WAIT prefix) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 */
        __emit 0xC4
        __emit 0x40
        jnz     loc_604667
        fld     dword ptr [ecx + 0x2c]
        fdiv    dword ptr [ecx + 0x34]
        fst     dword ptr [esp + 0x24]
        fcomp   dword ptr [g_0076c5b0]
        __emit 0xDF   /* fnstsw ax (no WAIT prefix) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 */
        __emit 0xC4
        __emit 0x01
        jnz     loc_604667
        fld     dword ptr [esp + 0x24]
        fcomp   dword ptr [g_0076d064]
        __emit 0xDF   /* fnstsw ax (no WAIT prefix) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     loc_60466f
        mov     dword ptr [esp + 0x24], 0x3f800000
        jmp     loc_60466f
loc_604667:
        mov     dword ptr [esp + 0x24], 0x0
loc_60466f:
        mov     ecx, dword ptr [ecx + 0x40]
        mov     eax, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esi + 0x34]
        lea     ecx, [ecx + ecx*0x2]
        push    eax
        lea     ecx, [edx + ecx*0x8]
        call    FUN_00604f30
        fld     dword ptr [g_0076d064]
        mov     eax, dword ptr [esp + 0x18]
        fsub    st(0), st(1)
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [esi + 0x84], edi
        fst     dword ptr [esp + 0x24]
        mov     edx, dword ptr [esp + 0x24]
        fstp    dword ptr [eax + 0x10]
        mov     dword ptr [esi + 0x80], edx
        fld     st(0)
        fstp    dword ptr [ecx + 0x10]
        fstp    dword ptr [esi + 0x88]
        jmp     loc_60475d
loc_6046bc:
        mov     al, byte ptr [esi + 0x1f]
        test    al, al
        jz      loc_60475d
        cmp     dword ptr [ecx + 0x38], 0x3f800000
        jz      loc_60470d
        fld     dword ptr [ecx + 0x2c]
        fsub    dword ptr [ecx + 0x38]
        fld     dword ptr [g_0076d064]
        fsub    dword ptr [ecx + 0x38]
        fdivp   st(1), st(0)
        fst     dword ptr [esp + 0x24]
        fcomp   dword ptr [g_0076c5b0]
        __emit 0xDF   /* fnstsw ax (no WAIT prefix) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 */
        __emit 0xC4
        __emit 0x01
        jnz     loc_60470d
        fld     dword ptr [esp + 0x24]
        fcomp   dword ptr [g_0076d064]
        __emit 0xDF   /* fnstsw ax (no WAIT prefix) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     loc_604715
        mov     dword ptr [esp + 0x24], 0x3f800000
        jmp     loc_604715
loc_60470d:
        mov     dword ptr [esp + 0x24], 0x0
loc_604715:
        mov     ecx, dword ptr [ecx + 0x44]
        mov     eax, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esi + 0x34]
        lea     ecx, [ecx + ecx*0x2]
        push    eax
        lea     ecx, [edx + ecx*0x8]
        call    FUN_00604f30
        fld     dword ptr [g_0076d064]
        mov     eax, dword ptr [esp + 0x1c]
        fsub    st(0), st(1)
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [esi + 0x80], edi
        fst     dword ptr [esp + 0x24]
        mov     edx, dword ptr [esp + 0x24]
        fstp    dword ptr [eax + 0x10]
        mov     dword ptr [esi + 0x84], edx
        fld     st(0)
        fstp    dword ptr [ecx + 0x10]
        fstp    dword ptr [esi + 0x88]
loc_60475d:
        mov     eax, dword ptr [esi + 0x18]
        mov     ecx, dword ptr [eax + 0x2bc]
        push    edi
        push    edi
        push    ecx
        mov     ecx, dword ptr [esi + 0x3c]
        call    FUN_00605760
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     0x8
    }
}
