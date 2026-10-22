/*
 * FUN_0075AD90 (251 B) — __stdcall, RET 0x4 (1 dword param). Returns a
 * human-readable string for an error code via a jump table (0x75ae8c, outside
 * this function's slice). Default case formats "Unknown error %d" into
 * DAT_008bc380 via wsprintfA and returns that buffer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_str_7af324[];
extern char g_str_7af31c[];
extern char g_str_7af30c[];
extern char g_str_7af300[];
extern char g_str_7af2ec[];
extern char g_str_7af2dc[];
extern char g_str_7af2c8[];
extern char g_str_7af2b8[];
extern char g_str_7af2a4[];
extern char g_str_7af28c[];
extern char g_str_7af274[];
extern char g_str_7af258[];
extern char g_str_7af244[];
extern char g_str_7af234[];
extern char g_str_7af228[];
extern char g_str_7af218[];
extern char g_str_7af208[];
extern char g_str_7af1f8[];
extern char g_str_7af1e4[];
extern char g_str_7af1d0[];
extern char g_str_7af1c0[];
extern char g_str_7af1b0[];
extern char g_str_7af19c[];
extern char g_str_7af18c[];
extern char g_str_7af17c[];
extern char g_str_7af168[];     /* "Unknown error %d" */
extern char g_buf_8bc380[];     /* DAT_008bc380 */
extern int g_jumptable_75ae8c[];/* jump table at 0x75ae8c */
extern int (__stdcall *g_wsprintfA)(char *, const char *, ...); /* IAT 0x76b4f8 */

__declspec(naked) char * __stdcall FUN_0075AD90(int param_1)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        lea     eax, [ecx - 0x1]
        cmp     eax, 0x19
        ja      L_ae6f
        jmp     dword ptr [eax*4 + g_jumptable_75ae8c]
L_ada7:
        mov     eax, offset g_str_7af324
        ret     0x4
L_adaf:
        mov     eax, offset g_str_7af31c
        ret     0x4
L_adb7:
        mov     eax, offset g_str_7af30c
        ret     0x4
L_adbf:
        mov     eax, offset g_str_7af300
        ret     0x4
L_adc7:
        mov     eax, offset g_str_7af2ec
        ret     0x4
L_adcf:
        mov     eax, offset g_str_7af2dc
        ret     0x4
L_add7:
        mov     eax, offset g_str_7af2c8
        ret     0x4
L_addf:
        mov     eax, offset g_str_7af2b8
        ret     0x4
L_ade7:
        mov     eax, offset g_str_7af2a4
        ret     0x4
L_adef:
        mov     eax, offset g_str_7af28c
        ret     0x4
L_adf7:
        mov     eax, offset g_str_7af274
        ret     0x4
L_adff:
        mov     eax, offset g_str_7af258
        ret     0x4
L_ae07:
        mov     eax, offset g_str_7af244
        ret     0x4
L_ae0f:
        mov     eax, offset g_str_7af234
        ret     0x4
L_ae17:
        mov     eax, offset g_str_7af228
        ret     0x4
L_ae1f:
        mov     eax, offset g_str_7af218
        ret     0x4
L_ae27:
        mov     eax, offset g_str_7af208
        ret     0x4
L_ae2f:
        mov     eax, offset g_str_7af1f8
        ret     0x4
L_ae37:
        mov     eax, offset g_str_7af1e4
        ret     0x4
L_ae3f:
        mov     eax, offset g_str_7af1d0
        ret     0x4
L_ae47:
        mov     eax, offset g_str_7af1c0
        ret     0x4
L_ae4f:
        mov     eax, offset g_str_7af1b0
        ret     0x4
L_ae57:
        mov     eax, offset g_str_7af19c
        ret     0x4
L_ae5f:
        mov     eax, offset g_str_7af18c
        ret     0x4
L_ae67:
        mov     eax, offset g_str_7af17c
        ret     0x4
L_ae6f:
        push    ecx
        push    offset g_str_7af168
        push    offset g_buf_8bc380
        call    dword ptr [g_wsprintfA]
        add     esp, 0xc
        mov     eax, offset g_buf_8bc380
        ret     0x4
    }
}
