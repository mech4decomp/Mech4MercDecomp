/*
 * FUN_004309b0 (286 B) — MLR look-up-light constructor/init. __thiscall
 * (RET 0x8). Sets vtable, reads several fields through a stream vtable
 * (virtual calls at +0x20/+0x4/+0x18), computes scale factors, allocates
 * a lookup table.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b97fc;
extern float g_76d064;
extern char g_76e254;
extern void FUN_00482530(void);
extern void FUN_00412a00(void);
extern void FUN_004084d0(void);

__declspec(naked) void FUN_004309b0(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x8]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp+0x14]
        push    eax
        mov     esi, ecx
        mov     ecx, dword ptr [g_007b97fc]
        push    edi
        push    ecx
        mov     ecx, esi
        call    FUN_00482530
        mov     edx, dword ptr [edi]
        push    0xc
        lea     eax, [esi+0x80]
        lea     ebx, [esi+0xa4]
        mov     dword ptr [ebx], 0
        push    eax
        mov     ecx, edi
        mov     dword ptr [esi], offset g_76e254
        call    dword ptr [edx+0x20]
        mov     edx, dword ptr [edi]
        lea     eax, [esi+0x9c]
        push    0x4
        push    eax
        mov     ecx, edi
        call    dword ptr [edx+0x20]
        mov     edx, dword ptr [eax]
        lea     ecx, [esi+0xa0]
        push    0x4
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x20]
        mov     eax, dword ptr [edi]
        push    0x4
        lea     ebp, [esi+0x8c]
        push    ebp
        mov     ecx, edi
        call    dword ptr [eax+0x20]
        mov     edx, dword ptr [eax]
        lea     ecx, [esi+0x90]
        push    0x4
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x20]
        push    ebx
        push    edi
        call    FUN_00412a00
        fld     dword ptr [g_76d064]
        fdiv    dword ptr [ebp]
        mov     eax, dword ptr [esp+0x20]
        add     esp, 0x8
        cmp     eax, 0x10
        fstp    dword ptr [esi+0x94]
        fld     dword ptr [g_76d064]
        fdiv    dword ptr [esi+0x90]
        fstp    dword ptr [esi+0x98]
        jle     set_one
        mov     eax, dword ptr [edi]
        push    0x4
        lea     ecx, [esi+0xa8]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax+0x20]
        jmp     after
set_one:
        mov     dword ptr [esi+0xa8], 0x3f000000
after:
        mov     ebx, dword ptr [esi+0xa0]
        imul    ebx, dword ptr [esi+0x9c]
        lea     edx, [ebx*4+0]
        push    edx
        call    FUN_004084d0
        add     esp, 0x4
        test    ebx, ebx
        mov     dword ptr [esi+0xac], eax
        jle     done
        mov     ebp, eax
loop_start:
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax+0x4]
        mov     edx, dword ptr [edi]
        push    0x2000
        mov     ecx, edi
        mov     dword ptr [ebp], eax
        call    dword ptr [edx+0x18]
        add     ebp, 0x4
        dec     ebx
        jnz     loop_start
done:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x8
    }
}
