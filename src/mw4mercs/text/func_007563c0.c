/*
 * FUN_007563C0 (247 B) — __fastcall (ECX = this). Audio stream position
 * update under a critical section (DAT_00858ac8). Calls FUN_007564C0 /
 * FUN_00756140, then computes a position ratio via FPU and either updates
 * this[0x70]->[0x2c] or calls FUN_00756350. Returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_858ac8[];             /* DAT_00858ac8 critical section */
extern float g_76d978;              /* 0x0076d978 float constant */
extern float g_76d064;              /* 0x0076d064 float constant */
extern void (__stdcall *g_EnterCriticalSection)(void *); /* IAT 0x76b110 */
extern void (__stdcall *g_LeaveCriticalSection)(void *); /* IAT 0x76b100 */

extern void __cdecl FUN_007564C0(void);
extern void __cdecl FUN_00756140(void);
extern void __cdecl FUN_00756350(void);

__declspec(naked) int __fastcall FUN_007563C0(void *this)
{
    __asm {
        sub     esp, 0xc
        push    ebx
        push    esi
        push    edi
        push    offset g_858ac8
        mov     esi, ecx
        call    dword ptr [g_EnterCriticalSection]
        mov     ecx, esi
        call    FUN_007564C0
        xor     ebx, ebx
        cmp     eax, ebx
        jz      L_63e8
        push    eax
        mov     ecx, esi
        call    FUN_00756140
L_63e8:
        mov     ecx, dword ptr [esi + 0x70]
        mov     eax, dword ptr [ecx]
        cmp     eax, 0x4
        jz      L_644d
        cmp     eax, 0x6
        jz      L_644d
        cmp     byte ptr [ecx + 0x38], bl
        mov     edi, dword ptr [ecx + 0xbc]
        mov     edx, dword ptr [ecx + 0x2c]
        mov     dword ptr [esp + 0xc], edi
        jz      L_641b
        mov     dword ptr [esp + 0x10], edx
        mov     dword ptr [esp + 0x14], ebx
        fild    qword ptr [esp + 0x10]
        fidiv   dword ptr [esp + 0xc]
        jmp     L_6431
L_641b:
        mov     dword ptr [esp + 0x10], edx
        mov     dword ptr [esp + 0x14], ebx
        fild    qword ptr [esp + 0x10]
        fidiv   dword ptr [esp + 0xc]
        fmul    dword ptr [g_76d978]
L_6431:
        fcomp   dword ptr [g_76d064]
        fnstsw  ax
        test    ah, 1
        jnz     L_64a0
        cmp     byte ptr [esi + 0x80], bl
        jz      L_6499
        sub     edx, edi
        mov     dword ptr [ecx + 0x2c], edx
        jmp     L_64a0
L_644d:
        mov     al, byte ptr [ecx + 0x38]
        mov     edx, dword ptr [ecx + 0x2c]
        neg     al
        mov     dword ptr [esp + 0x10], edx
        mov     dword ptr [esp + 0x14], ebx
        fild    qword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x14], ebx
        sbb     eax, eax
        and     eax, 0xfffffffd
        add     eax, 0x4
        imul    eax, dword ptr [ecx + 0x14]
        mov     dword ptr [esp + 0x10], eax
        fidiv   dword ptr [esp + 0x10]
        fcomp   dword ptr [g_76d064]
        fnstsw  ax
        test    ah, 1
        jnz     L_64a0
        cmp     byte ptr [esi + 0x80], bl
        jz      L_6499
        sub     edx, dword ptr [ecx + 0xbc]
        mov     dword ptr [ecx + 0x2c], edx
        jmp     L_64a0
L_6499:
        mov     ecx, esi
        call    FUN_00756350
L_64a0:
        push    offset g_858ac8
        call    dword ptr [g_LeaveCriticalSection]
        pop     edi
        pop     esi
        mov     eax, 0x1
        pop     ebx
        add     esp, 0xc
        ret
    }
}
