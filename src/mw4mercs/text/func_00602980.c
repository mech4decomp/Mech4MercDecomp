/*
 * FUN_00602980 (160 B) — __thiscall (ECX = this), RET 0xc.
 *
 * Allocates a 0x2c-byte object, initializes it from three stack
 * params, computes a double value, and inserts it into a list at
 * this+0x288 via FUN_004179b0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_007b8c10;
extern float DAT_0076c5b0;
extern void *__cdecl FUN_004084d0(int size);
extern void __fastcall FUN_00415180(void *this, int arg);
extern float __fastcall FUN_00707e70(void *this, int arg);
extern void __fastcall FUN_004179b0(void *this, void *arg);

__declspec(naked) void __stdcall FUN_00602980(void *param1, void *param2, float param3)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        push    0x2c
        mov     edi, ecx
        call    FUN_004084d0
        mov     esi, eax
        xor     ebx, ebx
        add     esp, 4
        cmp     esi, ebx
        jz      l_alloc_fail
        mov     eax, dword ptr [DAT_007b8c10]
        push    eax
        mov     ecx, esi
        call    FUN_00415180
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [eax + 0x8]
        mov     dword ptr [esi], 0x78b3d4
        mov     dword ptr [esi + 0x10], ecx
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [esi + 0x8], ebx
        push    ebx
        mov     dword ptr [esi + 0xc], ebx
        mov     dword ptr [esi + 0x14], edx
        mov     dword ptr [esi + 0x18], eax
        mov     dword ptr [esi + 0x1c], ecx
        call    FUN_00707e70
        fadd    dword ptr [esp + 0x18]
        mov     byte ptr [esi + 0x29], bl
        mov     byte ptr [esi + 0x28], bl
        fstp    qword ptr [esi + 0x20]
        fld     dword ptr [esp + 0x18]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      l_skip_set
        mov     byte ptr [esi + 0x28], 0x1
    l_skip_set:
        push    esi
        lea     ecx, [edi + 0x288]
        mov     dword ptr [esi], 0x78b3ec
        call    FUN_004179b0
        pop     edi
        pop     esi
        pop     ebx
        ret     0xc
    l_alloc_fail:
        xor     esi, esi
        push    esi
        lea     ecx, [edi + 0x288]
        call    FUN_004179b0
        pop     edi
        pop     esi
        pop     ebx
        ret     0xc
    }
}
