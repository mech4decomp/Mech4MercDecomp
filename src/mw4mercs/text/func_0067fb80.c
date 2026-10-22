/*
 * FUN_0067fb80 (622 B) — HUD update/render routine. Increments a frame
 * counter, reads the XOR-obfuscated global table, calls several member
 * helpers (FUN_0041ec50 / FUN_0041eae0), and updates per-slot counters in
 * the obfuscated table. __thiscall, RET 0x10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;
extern int g_007dab40;
extern double g_0077b648;
extern void FUN_00707e70(int);
extern void FUN_0041ec50(void);
extern void FUN_0041eae0(void);
extern int FUN_0067fa30(int);
extern void FUN_0067f940(void);

__declspec(naked) void FUN_0067fb80(void)
{
    __asm {
        sub     esp, 0x18
        push    ebx
        push    ebp
        mov     ebp, dword ptr [ecx+0x10]
        push    esi
        push    edi
        lea     edi, [ecx+0x50]
        mov     dword ptr [esp+0x18], ecx
        mov     cl, byte ptr [edi]
        inc     cl
        mov     al, cl
        cmp     al, 0xff
        mov     dword ptr [esp+0x24], ebp
        mov     dword ptr [esp+0x10], 0x0
        mov     byte ptr [edi], cl
        jnz     loc_fbac
        mov     byte ptr [edi], 0x0
loc_fbac:
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     esi, dword ptr [ecx]
        push    0x1
        xor     esi, 0x85739531
        call    FUN_00707e70
        fmul    qword ptr [g_0077b648]
        mov     ebx, 0x8
        fstp    dword ptr [esp+0x14]
        push    ebx
        push    edi
        mov     edi, dword ptr [esp+0x34]
        mov     ecx, edi
        call    FUN_0041ec50
        mov     edx, dword ptr [esi+0x92c]
        mov     esi, dword ptr [esp+0x30]
        push    0x20
        lea     eax, [edx+esi*4+0x10f4]
        push    eax
        mov     ecx, edi
        call    FUN_0041ec50
        push    0x20
        lea     ecx, [esp+0x18]
        push    ecx
        mov     ecx, edi
        call    FUN_0041ec50
        cmp     dword ptr [esp+0x34], 0x1
        jle     loc_fc5a
        push    ebx
        lea     edx, [esp+0x30]
        push    edx
        mov     ecx, edi
        mov     byte ptr [esp+0x34], 0xaa
        call    FUN_0041ec50
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     edx, dword ptr [ecx+0x14]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx+0x1814]
        mov     edx, dword ptr [eax+esi*4+0x242c]
        add     eax, 0x2424
        add     edx, ebx
        mov     dword ptr [eax+esi*4+0x8], edx
        add     dword ptr [eax+0xc00], ebx
loc_fc5a:
        test    ebp, ebp
        jz      loc_fd1c
        mov     eax, dword ptr [esp+0x24]
        mov     ebp, dword ptr [ebp]
        test    ebp, ebp
        mov     ecx, dword ptr [eax+0x4]
        mov     dword ptr [esp+0x24], ecx
        jz      loc_fd1c
        mov     edx, dword ptr [esp+0x18]
        mov     eax, dword ptr [edx+0x5c]
        push    eax
        mov     ecx, ebp
        call    FUN_0067fa30
        test    al, al
        jz      loc_fcb1
        lea     ecx, [esp+0x2c]
        push    ecx
        mov     ecx, edi
        mov     byte ptr [esp+0x30], 0x1
        call    FUN_0041eae0
        mov     edx, dword ptr [esp+0x38]
        mov     eax, dword ptr [esp+0x34]
        push    edx
        push    eax
        push    esi
        push    edi
        mov     ecx, ebp
        call    FUN_0067f940
        jmp     loc_fcc2
loc_fcb1:
        lea     ecx, [esp+0x2c]
        push    ecx
        mov     ecx, edi
        mov     byte ptr [esp+0x30], 0x0
        call    FUN_0041eae0
loc_fcc2:
        cmp     dword ptr [esp+0x34], 0x1
        jle     loc_fd0a
        push    ebx
        lea     edx, [esp+0x14]
        push    edx
        mov     ecx, edi
        call    FUN_0041ec50
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     edx, dword ptr [ecx+0x14]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx+0x1814]
        mov     edx, dword ptr [eax+esi*4+0x242c]
        add     eax, 0x2424
        add     edx, ebx
        mov     dword ptr [eax+esi*4+0x8], edx
        add     dword ptr [eax+0xc00], ebx
loc_fd0a:
        mov     eax, dword ptr [esp+0x10]
        mov     ebp, dword ptr [esp+0x24]
        inc     eax
        mov     dword ptr [esp+0x10], eax
        jmp     loc_fc5a
loc_fd1c:
        mov     eax, dword ptr [esp+0x34]
        test    eax, eax
        jle     loc_fd6a
        push    ebx
        lea     eax, [esp+0x38]
        push    eax
        mov     ecx, edi
        mov     byte ptr [esp+0x3c], 0xaa
        call    FUN_0041ec50
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     eax, dword ptr [edx+0x14]
        xor     eax, 0x85739531
        mov     eax, dword ptr [eax+0x1814]
        mov     edx, dword ptr [eax+esi*4+0x242c]
        add     eax, 0x2424
        add     edx, ebx
        mov     dword ptr [eax+esi*4+0x8], edx
        add     dword ptr [eax+0xc00], ebx
loc_fd6a:
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [edx]
        mov     ebx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [esp+0x10]
        xor     eax, ebx
        lea     edx, [eax+0x14]
        mov     eax, dword ptr [edx]
        xor     eax, 0x85739531
        mov     eax, dword ptr [eax+0x1814]
        mov     ebx, dword ptr [eax+esi*4+0x242c]
        add     eax, 0x2424
        add     ecx, 0x8
        add     ebx, ecx
        mov     dword ptr [eax+esi*4+0x8], ebx
        mov     edi, dword ptr [eax+0xc00]
        add     edi, ecx
        mov     ecx, dword ptr [edx]
        mov     dword ptr [eax+0xc00], edi
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx+0x1814]
        mov     edi, dword ptr [eax+esi*4+0x242c]
        add     eax, 0x2424
        mov     ecx, 0x40
        add     edi, ecx
        mov     dword ptr [eax+esi*4+0x8], edi
        mov     edx, dword ptr [eax+0xc00]
        pop     edi
        pop     esi
        add     edx, ecx
        pop     ebp
        mov     dword ptr [eax+0xc00], edx
        pop     ebx
        add     esp, 0x18
        ret     0x10
    }
}
